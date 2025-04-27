#include<bits/stdc++.h>
using namespace std;

vector<int>maximumElement(vector<int>&arr,int n,int k){
    vector<int>ans;
    for(int i=0;i<=n-k;i++){
        int maxi=arr[i];
        for(int j=i;j<i+k;j++){
            maxi=max(maxi,arr[j]);
        }
        ans.push_back(maxi);
    }
    return ans;
}

int main(){
    vector<int>arr={5,3,2,6,8,10,4,2,1};
    int n=arr.size();
    vector<int>ans=maximumElement(arr,n,3);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}