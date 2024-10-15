#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    //constructor...
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
    //destructor...
    ~Node(){
        int val=this->data;
        while(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data -> "<<val<<endl;
    }
};
bool  iscircularLinkrdList(Node* head){
    if(head==NULL){
        return true;
    }
    Node* temp=head->next;
    while(temp!=NULL&&temp!=head){
        temp=temp->next;
    }
    if(temp==head){
        return true;
    }
 
    return false;
}
void insertNode(Node* &tail,int element,int d){
    //list is empty...
    if(tail==NULL){
        Node* newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    else{
        //non-empty list...
        //assuming that the value is present in the list...
        Node* curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        //element is found when curr is represent the element wala node...
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}
int getLength(Node* &tail){
    int cnt=0;
    Node* temp=tail;
    do{
        cnt++;
        temp=temp->next;
    }
    while(tail!=temp);
    return cnt;
}
void print(Node* &tail){
    Node* temp=tail;
    if(tail==NULL){
        cout<<"List is empty ";
        return;
    }
    else{
        do{
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        while(tail!=temp);
        cout<<endl;
    }
}

void deleteNode(Node* &tail,int value){
    //list is empty...
    if(tail==NULL){
        cout<<"List is empty ";
    }
    else{
        Node* prev=tail;
        Node* curr=prev->next;
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }
        if(curr==prev){
            tail=NULL;
        }
        else if(tail==curr){
            tail=prev;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

int  main(){
    Node* tail=NULL;
    Node* head=NULL;
    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,3,2);
    print(tail);

    insertNode(tail,5,9);
    print(tail);

    insertNode(tail,2,7);
    print(tail);

    cout<<"Length of the list is -> "<<getLength(tail)<<endl;

    deleteNode(tail,3);
    print(tail);

    cout<<"Length of the list is -> "<<getLength(tail)<<endl;
    if(iscircularLinkrdList(head)){
        cout<<"is circular linked list";
    }
    else{
        cout<<"nott";
    }

}