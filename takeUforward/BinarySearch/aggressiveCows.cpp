#include<bits/stdc++.h>
using namespace std;

bool canWePlace(vector<int>&arr,int dist,int k){
    int n=arr.size();
    int cntCows=1;
    int last=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]-last>=dist){
            cntCows++;
            last=arr[i];
        }
        if(cntCows>=k){
            return true;
        }
    }
    return false;
}

int aggressiveCows(vector<int>&arr,int n,int k){
    sort(arr.begin(),arr.end());
    int low=1,high=arr[n-1]-arr[0];
    while(low<=high){
        int mid=(low+high)/2;
        if(canWePlace(arr,mid,k)==true){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high;
}


int main(){
    vector<int>arr={0,3,4,7,9,10};
    int k=4;
    int n=arr.size();
    cout<<"The maximum possible minimum distance is ->  "<<aggressiveCows(arr,n,k);
}