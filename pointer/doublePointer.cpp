#include<iostream>
using namespace std;


void update(int **p2){
    //Not changes
    // p2=p2+1;

    // *p2=*p2+1;//yes it can change

    **p2=**p2+1;

}

int main(){
    int i=6;
    int *p=&i;
    int **p2=&p;
    cout<<"Before -> "<<i<<endl;
    cout<<"Before -> "<<p<<endl;
    cout<<"Before -> "<<p2<<endl;
    update(p2);
    cout<<"After -> "<<i<<endl;
    cout<<"After -> "<<p<<endl;
    cout<<"After -> "<<p2<<endl;

}