#include<iostream>
using namespace std;

class circularQueue{
    
    int *arr;
    int n;
    int front;
    int rear;
    public:
    circularQueue(int n){
        this->n=n;
        arr=new int[n];
        front=-1;
        rear=-1;

    }

    void enQueue(int d){
        if((front==0&&rear==n-1)||(rear==(front-1)%(n-1))){
            cout<<"queue is full";  
        }
        else if(front==-1){
            front=rear=0;
        }
        else if(rear==n-1&&front!=0){
            rear=0;
        }
        else{
            rear++;
        }
        arr[rear]=d;
    }
        int dequeue(){
        if(front==-1){
            cout<<"queue is empty";
            return -1;
        }
        int ans=arr[front];
        arr[front]=-1;
        if(front==rear){
            front=rear=-1;
        }
        else if(front==n-1){
            front=0;
        }
        else{
            front++;
        }
        return ans;
    }
      void display() {
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue elements are: ";
        if (rear >= front) {
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
        } 
        else {
            for (int i = front; i < n; i++) {
                cout << arr[i] << " ";
            }
            for (int i = 0; i <= rear; i++) {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }

};

int main(){
   circularQueue q(5);
   q.enQueue(10);
   q.enQueue(12);
   cout<<q.dequeue();
   q.enQueue(34);
   q.display();

}