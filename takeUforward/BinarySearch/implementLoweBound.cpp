#include<bits/stdc++.h>
using namespace std;

int lowerBound(int arr[],int n,int x){
        int s=0;
        int ans=n;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]>=x){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int arr[]={3,5,8,15,19};
    int n=5;
    int target=4;
    cout<<lowerBound(arr,n,target);
}