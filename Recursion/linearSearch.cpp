#include<iostream>
using namespace std;

bool isPossible(int arr[],int n,int key){
    //Base Case
    if(n==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        return isPossible(arr+1,n-1,key);
    }
}

int main(){
    int arr[]={2,4,3,5,6};
    int n=5;
    if(isPossible(arr,n,7)){
        cout<<"Element is present";
    }
    else{
        cout<<"Not present";
    }
}