#include<bits/stdc++.h>
using namespace std;


void subsetSumHelper(int index,vector<int>& arr,vector<int>&ans,int n,int sum){
    if(index==n){
        ans.push_back(sum);
        return;
    }
    //pick element
    subsetSumHelper(index+1,arr,ans,n,sum+arr[index]);
    //not pick element
    subsetSumHelper(index+1,arr,ans,n,sum);
}


vector<int> subsetSums(vector<int>& arr,int n) {
    // code here
    vector<int>ans;
    subsetSumHelper(0,arr,ans,n,0);
    sort(ans.begin(),ans.end());
    return ans;
}



int main(){
    vector<int>arr={2,3,1};
    int n=arr.size();
    vector<int>ans=subsetSums(arr,n);
    cout<<"[";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ,";
    }
    cout<<"]";
}