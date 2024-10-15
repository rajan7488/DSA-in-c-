#include<iostream>
using namespace std;

int duplicate(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    for(int i=0;i<n;i++){
        ans=ans^i;
    }
    return ans;
}

int main(){
    int n=6;
    int arr[]={2,3,4,5,6,3};
    cout<<duplicate(arr,n);
}