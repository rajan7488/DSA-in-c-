#include<iostream>
using namespace std;
/*
void print(int *p){
    cout<<*p+1;
}
*/

void update(int *p){
    //No changes
    // p=p+1;

    *p=*p+1;//yes 

}

int main(){
    int value=5;
    int *p=&value;
    cout<<"Before -> "<<value<<endl;
    cout<<"Before -> "<<p<<endl;
    update(p);
    cout<<"After -> "<<value<<endl;
    cout<<"After -> "<<p<<endl;
}
