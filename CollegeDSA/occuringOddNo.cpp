#include<bits/stdc++.h>
using namespace std;



int main(){
    vector<int>arr={5,5,1,2,2,3,4,4,3};
    int ans=0;
    // for(int i=0;i<arr.size();i++){
    //     ans^=arr[i];
    // }
    // cout<<ans;
    unordered_map<int,int>mpp;
    for(int i=0;i<arr.size();i++){
        mpp[i]++;
    }
    for(auto& pair:mpp){
        if(pair.second%2!=0){
            cout<<pair.first<< " ";
        }
    }
}