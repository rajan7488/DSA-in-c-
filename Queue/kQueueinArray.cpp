#include<iostream>
using namespace std;

class Queue{
    public:
    int n;
    int k;
    int *front;
    int *rear;
    int *arr;
    int *next;
    int freespot;
    public:
        Queue(int n,int k){
            this->n=n;
            this->k=k;
            front = new int[k];
            rear = new int[k];
            next = new int[n];
            for(int i=0;i<k;i++){
                front[i]=-1;
                rear[i]=-1;
            }

            for(int i=0;i<n-1;i++){
                next[i]=i+1;
            }
            next[n-1]=-1;

            arr=new int[n];
            freespot=0;
        }

    void  enqueue(int data,int qn){
        if(freespot==-1){
            cout<<"queue is full";
        }
        int index=freespot;
        freespot=next[index];

        //first element
        if(front[qn]==-1){
            front[qn]=index;
        }
        else{
            //link new element to prev element
            next[rear[qn]]=index;
        }
        //update next
        next[index]=-1;
        //update rear
        rear[qn]=index;
        //push element
        arr[index]=data;
    }

    int dequeue(int qn){
        if(front[qn]==-1){
            cout<<"queue underflow";
            return -1;
        }
        int index=front[qn];
        front[qn]=next[index];
        next[index]=freespot;
        freespot=index;
        return arr[index];
    }
};

int main(){
       int k = 3, n = 10;
    Queue ks(n,k);

 
    // Let us put some items in queue number 2
    ks.enqueue(15, 2);
    ks.enqueue(45, 2);
 
    // Let us put some items in queue number 1
    ks.enqueue(17, 1);
    ks.enqueue(49, 1);
    ks.enqueue(39, 1);
 
    // Let us put some items in queue number 0
    ks.enqueue(11, 0);
    ks.enqueue(9, 0);
    ks.enqueue(7, 0);
 
    cout << "Dequeued element from queue 2 is " << ks.dequeue(2) << endl;
    cout << "Dequeued element from queue 1 is " << ks.dequeue(1) << endl;
    cout << "Dequeued element from queue 0 is " << ks.dequeue(0) << endl;
}