#include<iostream>
using namespace std;

class Queue{
    int *arr;
    int size;
    int front;
    int rear;
    public:
    Queue(int size){
     this->size=size;
     arr=new int[size];
     front=0;
     rear=0;

    }

    void enqueue(int d){
        if(rear==size){
            cout<<"Queue is full";
        }
        else{
            arr[rear]=d;
            rear++;
        }
    }
    int dequeue(){
        if(front==rear){
            return -1;
        }
        else{
        int ans=arr[front];
        arr[front]=-1;
        front++;
        if(front==rear){
            front=0;
            rear=0;
        }
        return ans;
        }
    }

    int frontele(){
        if(front==rear){
            return -1;
        }
        else{
            return arr[front];
        }
    }
    bool isEmpty(){
        if(front==rear){
            return true;
        }
        else{
            return false;
        }
    }
    void display(){
        if(front==rear){
            cout<<"queue is empty";
        }
        else{
            for(int i=front;i<rear;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){

    Queue q(5);

    q.enqueue(10);
    q.enqueue(12);
    q.enqueue(10);
    q.enqueue(12);   
    q.display();
    cout<<q.dequeue()<<endl;
    q.display();
    cout<<q.frontele();
    if(q.isEmpty()){
       cout<<"Queue is empty";
    }
    else {
        cout<<"Queue is not empty";
    }

}
