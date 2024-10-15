#include<iostream>
using namespace std;
int pop(int n){
    n=15;
    if(n>=1){
        return n*pop(n-2);
    }
    else{
        return 1;
    }
}

int main(){
    int n;
    cout<<pop(n);
}