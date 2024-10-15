#include<iostream>
using namespace std;

void moveElement(int arr[],int n){
    //using two pointer approach to solve the problem
    int left=0;
    int right=n-1;
    while(left<=right){
        if(arr[left]<0&&arr[right]<0){
            left++;
        }
        else if(arr[left]>0&&arr[right]<0){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        else{
            right--;
        }
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]= {-12, 11, -13, -5, 6, -7, 5, -3, 11};//-12 -3 -13 -5 -7 6 5 11 11 
    int n=9;
    printArray(arr,n);
    moveElement(arr,n);
    printArray(arr,n);
}