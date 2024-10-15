#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[minIndex]>arr[j]){
                minIndex=j;
            }
        }
        // int temp=arr[minIndex];
        // arr[minIndex]=arr[i];
        // arr[i]=temp;
        swap(arr[minIndex],arr[i]);
    }
}

int main(){
    int arr[]={6,2,10,4,8};
    int n=5;
    printArray(arr,n);
    selectionSort(arr,n);
    printArray(arr,n);

}