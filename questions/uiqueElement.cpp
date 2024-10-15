#include<iostream>
using namespace std;

int uniqe(int arr[], int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){

    int arr[]={2,3,4,4,2,3,5};
    int n=7;
    cout<<uniqe(arr,n);
}