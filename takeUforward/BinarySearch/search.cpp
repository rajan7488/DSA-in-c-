#include<bits/stdc++.h>
using namespace std;

int binarySearch(int *arr,int target,int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
     mid=s+(e-s)/2;

    }
    return -1;
}


int main(){
    int arr[]= {3, 4, 6, 7, 9, 12, 16, 17};
    int n=8;
    int target=6;
    cout<<"indexis -> "<<binarySearch(arr,target,n);
}