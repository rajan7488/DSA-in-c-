#include<iostream>
using namespace std;
void print(int arr[],int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int binarySearch(int *arr,int s,int e,int k){
    print(arr,s,e);
    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;
    cout<<"mid is "<<arr[mid]<<endl;
    if(arr[mid]==k){
        return true;
    }
    else if(arr[mid]<k){
        return binarySearch(arr,mid+1,e,k);
    }
    else{
        return binarySearch(arr,s,mid-1,k);
    }
}



int main(){
    int arr[]={2,4,5,6,8,12};
    int n=6;
    int key=12;
    cout<<"Present or not -> "<<binarySearch(arr,0,5,key);
}