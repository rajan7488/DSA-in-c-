#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                // swap(arr[j],arr[j+1]);
        }
        }
    }
}

int main(){
    int arr[]={6,2,10,4,8};
    int n=5;
    printArray(arr,n);
    bubbleSort(arr,n);
    printArray(arr,n);
}