#include<bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int>&arr,int k,int n){
    for(int i=0;i<n;i++){
        if(arr[i]<=k){
            k++;
        }
        else{
            break;
        }
    }
    return k;
}


int main(){
    vector<int>arr={4,7,9,10};
    int k=4;
    int n=arr.size();
    cout<<"kth missing positive number -> "<<findKthPositive(arr,k,n);
}