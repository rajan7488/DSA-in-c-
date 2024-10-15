#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* Next;
    Node* prev;

    //constructor
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->Next=NULL;
    }

    //destructor
    ~Node(){
        int value=this->data;
        if(Next!=NULL){
            delete Next;
            Next=NULL;
        }
        cout<<"memory is free for node with data -> "<<value<<endl;
    }

};
//in the doubly linked list insert at the head...
void insertAtHead(Node* &tail,Node* &head ,int d){
    if(head==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
        Node* temp=new Node(d);
        temp->Next=head;
        head->prev=temp;
        head=temp;
    }
}

void insertAtTail(Node* &tail,Node* &head,int d){
    if(tail==NULL){
        Node* temp=new Node(d);
        tail=temp;
        head=temp;
    }
    else{
        Node* temp=new Node(d);
        tail->Next=temp;
        temp->prev=tail;
        tail=temp;
    }

}

void insertAtPosition(Node* &head,Node* &tail,int pos,int d){
    if(pos==1){
        insertAtHead(tail,head,d);
        return;
    }
    int cnt=1;
    Node* temp=head;
    while(cnt<pos-1){
        temp=temp->Next;
        cnt++;
    }
    if(temp->Next==NULL){
        insertAtTail(tail,head,d);
        return;
    }
    Node* nodeToStart=new Node(d);
    nodeToStart->Next=temp->Next;
    temp->Next->prev=nodeToStart;
    temp->Next=nodeToStart;
    nodeToStart->prev=temp;
}

void deleteNode(Node* &head,int pos){
    if(pos==1){
        Node* temp=head;
        temp->Next->prev=NULL;
        head=head->Next;
        temp->Next=NULL;
        delete temp;
    }
    else{
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<pos){
            prev=curr;
            curr=curr->Next;
            cnt++;
        }
        curr->prev=NULL;
        prev->Next=curr->Next;
        curr->Next=NULL;
        delete curr;
    }
}

//reverse in the doubly linked list...
void reverse(Node* &head,Node* &tail){
    Node* temp = NULL;
    Node* current = head;
 
    /* swap next and prev for all nodes of
    doubly linked list */
    while (current != NULL) {
        temp = current->prev;
        current->prev = current->Next;
        current->Next = temp;
        current = current->prev;
    }
    tail=head;
    if (temp != NULL) {
        head = temp->prev;
    }

}

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->Next;
    }
    cout<<endl;
}

int getLength(Node* head){
        Node* temp=head;
        int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->Next;
    }
   return len;
}

int main(){
    // Node* node1=new Node(10);
    // cout<<node1->data;
    Node* head=NULL;
    Node* tail=NULL;
    print(head);
    insertAtHead(tail,head,15);
    print(head);
    insertAtHead(tail,head,20);
    print(head);
    insertAtHead(tail,head,5);
    print(head);
    insertAtTail(tail,head,23);
    print(head);
    insertAtTail(tail,head,25);
    print(head);
    insertAtPosition(head,tail,3,12);
    print(head);
    cout<<"head -> "<<head->data<<endl;
    cout<<"tail -> "<<tail->data<<endl;
    // cout<<"Length of the linked list is the -> "<<getLength(head)<<endl;
    // deleteNode(head,5);
    reverse(head,tail);
    print(head);
    cout<<"head -> "<<head->data<<endl;
    cout<<"tail -> "<<tail->data<<endl;
    cout<<"Length of the linked list is the -> "<<getLength(head);
}