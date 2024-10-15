#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
     int size;
     int *arr;
     int top;



    // constructor...
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }


    // for push data in stack...
    void push(int element){
        if(size - top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }


    void pop() {
        if(top >=0 ) {
            top--;
        }
        else{
            cout << "Stack UnderFlow" << endl;
        }
    }


    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }


    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }


};

int main(){
    Stack s(5);
    s.push(12);
    s.push(34);
    s.push(45);
    s.push(54);
    s.push(23);
    s.push(67);
    cout<<s.peek()<<endl;
    s.pop();

    cout<<s.peek()<<endl;
    s.pop();

    cout<<s.peek()<<endl;
    s.pop();

    cout<<s.peek()<<endl;
    s.pop();

    cout<<s.peek()<<endl;
    s.pop();

    cout<<s.peek()<<endl;
    s.pop();




    if(s.isEmpty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is full"<<endl;
    }
}