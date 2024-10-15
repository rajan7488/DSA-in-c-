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
    int arr[8]={1,2,3,3,3,3,4,4};
    int first=firstoccu(arr,8,4);
    int second=lastoccu(arr,8,4);
    int totalOccurence=(second-first)+1;
    cout<<"Total Occurence Of 4 is "<<totalOccurence;
    
}