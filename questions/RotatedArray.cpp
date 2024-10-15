#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

 void  rotateArray(int arr[],int n,int k){
    for(int i=8;i>0;i--){
    int temp=(i-k)%n;
        arr[temp]=arr[i];
    }
}

int main(){
    int arr[8]={7,5,2,11,2,43,1,1};
    printArray(arr,8);
    rotateArray(arr,8,2);
    printArray(arr,8);
}