#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    int mid=(low+high)/2;
    while(low<=high){
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        mid=(low+high)/2;
    }
    return -1;
}

int main(){
    int arr[8]={2,4,5,6,12,34,45,57};
    int index=binarySearch(arr,8,57);
    cout<<"index of 57 is "<<index;
}

