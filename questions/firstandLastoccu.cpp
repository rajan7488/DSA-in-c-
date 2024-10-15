#include<iostream>
using namespace std;

int firstoccu(int arr[] ,int n, int key ){
    int low=0;
    int high=n-1;
    int mid=low+(high-low)/2;
    int ans=-1;
    while(low<=high){
        if(arr[mid]==key){
            ans=mid;
            high=mid-1;
        }
        else if(key>arr[mid]){
            low =mid+1;
        }
        else{
            high=mid-1;
        }
        mid=low+(high-low)/2;
    }
    return ans;
}

int lastoccu(int arr[] ,int n, int key ){
    int low=0;
    int high=n-1;
    int mid=low+(high-low)/2;
    int ans=-1;
    while(low<=high){
        if(arr[mid]==key){
            ans=mid;
            low=mid+1;
        }
        else if(key>arr[mid]){
            low =mid+1;
        }
        else{
            high=mid-1;
        }
        mid=low+(high-low)/2;
    }
    return ans;
}

int main(){

int arr[8]={2,3,3,4,5,6,6,6};
cout<<"First occurence is "<<firstoccu(arr,8,6)<<endl;
cout<<"last occurence is "<<lastoccu(arr,8,6);

cout<<"hello";
}