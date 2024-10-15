#include<iostream>
using namespace std;

int firstoccu(int *arr,int s,int e,int n,int k){
    if(s<=e){
        int mid=s+(e-s)/2;
        if((mid==0||k>arr[mid-1])&&arr[mid]==k){
            return mid;
        }
        else if(arr[mid]<k){
            return firstoccu(arr,mid+1,e,n,k);
        }
        else{
            return firstoccu(arr,s,mid-1,n,k);
        }
    }
    return -1;
}


int lastoccu(int arr[], int low, int high, int n, int x)
{
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if ((mid == n - 1 || x < arr[mid + 1])
            && arr[mid] == x)
            return mid;
        else if (x < arr[mid])
            return lastoccu(arr, low, (mid - 1), x, n);
        else
            return lastoccu(arr, (mid + 1), high, x, n);
    }
    return -1;
}


int main(){

int arr[8]={2,3,3,4,5,8,9,9};
cout<<"First occurence is ->  "<<firstoccu(arr,0,7,8,9)<<endl;
cout<<"last occurence is -> "<<lastoccu(arr,0,7,8,9);

}