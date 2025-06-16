#include<iostream>
using namespace std;

int fib(int n){
    if (n==0||n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}










int main(){
    int n=4;
    // cin>>n;
    // int a=0;
    // int b=1;
    // cout<<a<<","<<b<<",";
    // for(int i=1;i<=n;i++){
    //     int nextnum=a+b;
    //     cout<<nextnum<<",";
    //     a=b;
    //     b=nextnum;
    // }

    cout<<fib(n);
}