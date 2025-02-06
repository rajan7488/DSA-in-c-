#include<bits/stdc++.h>
using namespace std;
vector<int>twoSum(int n,vector<int>&arr,int target){
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        int num=arr[i];
        int more=target-num;
        if(mpp.find(more)!=mpp.end()){
            return {mpp[more],i};
        }
        mpp[num]=i;
    }
        return{-1,-1};
    }


int main(){
    int n=3;
    vector<int>arr={3,2,4};
    int target=6;
    vector<int>ans=twoSum(n,arr,target);
    cout<<"The sum is ["<<ans[0]<<", "<<ans[1]<<"]";

}