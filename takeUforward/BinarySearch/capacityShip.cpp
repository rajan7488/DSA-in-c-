#include<bits/stdc++.h>
using namespace std;

int findDays(vector<int>&arr,int capacity){
    int days=1;
    int load=0;
    for(int i=0;i<arr.size();i++){
        if(load+arr[i]>capacity){
            days=days+1;
            load=arr[i];
        }
        else{
            load+=arr[i];
        }
    }
    return days;
}

int shipWithinDays(vector<int>&arr,int days){
    int maxi=INT_MIN;
    int sum=0;
    for(int i=0;i<arr.size();i++){
        maxi=max(maxi,arr[i]);
        sum+=arr[i];
    }
    int low=maxi; 
    int high=sum;
    while(low<=high){
        int mid=(low+high)/2;
        if(findDays(arr,mid)<=days){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}



int main(){
    vector<int>arr={1,2,3,4,5,6,7,8,9,10};
    int days=5;
    cout<<shipWithinDays(arr,days);
}