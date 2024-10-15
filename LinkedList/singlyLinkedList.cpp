#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* Next;

    //constructor...
    Node(int d){
        this->data=d;
        this->Next=NULL;
    }
    //destructor...
    ~Node(){
        int value=this->data;
        if(this->Next!=NULL){
            delete Next;
            this->Next=NULL;
        }
        cout<<"memory is free for node with data -> "<<value<<endl;
    }

};

//in the singly Linked list insertion at the head...
void InsertedAtHead(Node* &head , int d){
    //new node created
    Node* temp=new Node(d);
    temp->Next=head;
    head=temp;
}

bool  iscircularLinkrdList(Node* head){
    if(head==NULL){
        return true;
    }
    Node* temp=head->Next;
    while(temp!=NULL&&temp!=head){
        temp=temp->Next;
    }
    if(temp==head){
        return true;
    }
 
    return false;
}

//in the singly linked list insertion at the end...
void InsertedAtTail(Node* &tail,int d){
    //new node created
    Node* temp=new Node(d);
    tail->Next=temp;
    tail=temp;
}

//in the singly linked list inserted at the begining...
void InsertedAtPosition(Node* &head,Node* &tail,int pos,int d){
    if(pos==1){
        InsertedAtHead(head,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->Next;
        cnt++;
    }
    //inserting at tail...
    if(temp->Next==NULL){
        InsertedAtTail(tail,d);
        return;
    }
    //creating a node
    Node* nodeToInsert=new Node(d);
    nodeToInsert->Next=temp->Next;
    temp->Next=nodeToInsert;
}

//detect loop...
bool detectLoop(Node* head){
    if(head==NULL){
        return false;
    }
    map<Node*,bool>visited;
    Node* temp=head;
    while(temp!=NULL){
        //cycle is present
        if(visited[temp]==true){
            cout<<"cycle is present "<<temp->data;
            return true;
        }
        return true;
        temp=temp->Next;

    }
    return false;
}

//floyd detection algorithm...
Node* floydDetection(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* slow=head;
    Node* fast=head;
    while(slow!=NULL&&fast!=NULL){
        fast=fast->Next;
        if(fast!=NULL){
            fast=fast->Next;
        }
        slow=slow->Next;
        if(fast==slow){
            cout<<"present at -> "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}

//Beigning loop detection...
Node* getIntersection(Node* head){
    Node* intersection=floydDetection(head);
    Node* slow=head;
    while(slow!=intersection){
        intersection=intersection->Next;
        slow=slow->Next;
    }
    return slow;
}

//Remove loop from linked lidt...
void removeLoop(Node* head){
    if(head==NULL){
        return ;
    }
    Node* startOfLoop=getIntersection(head);
    Node* temp=startOfLoop;
    while(temp->Next!=startOfLoop){
        temp=temp->Next;
    }
    temp->Next=NULL;
}

//delete node in singly linked list...
void deleteNode(Node* &head,int pos){
    //delete first node...
    if(pos==1){
        Node* temp=head;
        head=head->Next;
        //memory free from node...
        temp->Next=NULL;
        delete temp;
    }

    else{
        int cnt=1;
        Node* curr=head;
        Node* prev=NULL;
        while(cnt<pos){
            prev=curr;
            curr=curr->Next;
            cnt++;
        }
        prev->Next=curr->Next;
        curr->Next=NULL;
        delete curr;
    }
}

void reverse(Node* &head,Node* &tail){
    Node* n=head;
    Node* curr=head;
    Node* prev=NULL;
    Node* next=NULL;
    while(curr!=NULL){
        next=curr->Next;
        curr->Next=prev;
        prev=curr;
        curr=next;
    }
   head=tail;
   tail=n;
}

void print(Node* &head){
    if(head==NULL){
        cout<<"List is Empty ";
        return;
    }
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->Next;
    }
    cout<<endl;
}

int main(){
    Node* node1=new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->Next<<endl;
    Node* head=node1;
    Node* tail=node1;

    print(head);
    //inseted at the head...
    // InsertedAtHead(head,12);
    // InsertedAtHead(head,15);
    // InsertedAtHead(head,20);

    //inserted at tail...
    InsertedAtTail(tail,12);
    // print(head);
    InsertedAtTail(tail,15);
    // print(head);
    InsertedAtTail(tail,20);
    // print(head);
    //inserted at any position...
    InsertedAtPosition(head,tail,5,22);
    // print(head);
    //delete node at any position...
    deleteNode(head,3);
    tail->Next=head->Next;
    // print(head);
    cout<<" head -> "<<head->data<<endl;
    cout<<" tail -> "<<tail->data<<endl;
    if(floydDetection(head)){
        cout<<"cycle is present"<<endl;
    }
    else{
        cout<<"loop is not present";
    }
    Node* loop=getIntersection(head);
    cout<<"starting is -> "<<loop->data;
    removeLoop(head);
    
    print(head);
    reverse(head,tail);
    print(head);
    cout<<" head -> "<<head->data<<endl;
    cout<<" tail -> "<<tail->data<<endl;
        if(iscircularLinkrdList(head)){
        cout<<"is circular linked list";
    }
    else{
        cout<<"nott";
    }

}