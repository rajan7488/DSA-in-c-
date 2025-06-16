#include<bits/stdc++.h>
using namespace std;

void permutation(vector<int>&arr,int start,vector<vector<int>>&result){
    if(start==arr.size()){
        result.push_back(arr);
        return;
    }
    for(int i=start;i<arr.size();i++){
        swap(arr[start],arr[i]);
        permutation(arr,start+1,result);
        swap(arr[start],arr[i]);
    }
}

int main(){
    vector<int>arr={1,2,3};
    vector<vector<int>>result;
    permutation(arr,0,result);
    for(auto& perm : result){
        for(int num : perm){
            cout<<num<<" ";
        }
        cout<<endl;
    }
}