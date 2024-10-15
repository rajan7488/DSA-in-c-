#include<iostream>
using namespace std;

void bubbleSort(int *arr,int n){
    //Base Case

    if(n==0||n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSort(arr,n-1);
}


int main(){
    int arr[]={2,1,4,3,5};
    int n=5;
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}