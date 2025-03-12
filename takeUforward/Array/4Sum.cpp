#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>fourSum(vector<int>&nums,int n,int target){
    set<vector<int>>st;
    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            for(int k=j+1;k<n-1;k++){
                for(int l=k+1;l<n;l++){
                    if(nums[i]+nums[j]+nums[k]+nums[l]==0){
                        vector<int>temp={nums[i],nums[j],nums[k],nums[l]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>>ans(st.begin(),st.end());
    return ans;
}



int main(){
    vector<int>arr={1,0,-1,0,-2,2};
    int n=arr.size();
    int target=0;
    vector<vector<int>>ans=fourSum(arr,n,target);
    for(auto it: ans){
        cout<< "[";
        for(auto i : it){
            cout<<i<<" ";
        }
        cout<<"]";
    }
    cout<<endl;
}