#include<iostream>
using namespace std;

void swapA(int arr[],int n){
        for(int i=0;i<n;i+=2){
        // if(i+1<n){
            // swap(arr[i],arr[i+1]);
            int temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        // }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[6]={2,3,4,5,6,7};
    int n=6;
    swapA(arr,n);
}