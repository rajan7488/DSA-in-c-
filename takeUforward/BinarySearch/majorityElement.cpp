#include<bits/stdc++.h>

using namespace std;

vector<int> majorityElement(vector<int>&v,int n){
    int cnt1=0;
    int cnt2=0;
    int ele1,ele2;
    for(int i=0;i<n;i++){
        if(cnt1==0&&ele2!=v[i]){
            cnt1=1;
            ele1=v[i];
        }
        else if(cnt2==0&&ele1!=v[i]){
            cnt2=1;
            ele2=v[i];
        }
        else if(v[i]==ele1){
            cnt1++;
        }
        else if(v[i]==ele2){
            cnt2++;
        }
        else{
            cnt1--;
            cnt2--;
        }
    }
    vector<int>ls;
    cnt1=0,cnt2=0;
    for(int i=0;i<n;i++){
        if(v[i]==ele1){
            cnt1++;
        }
        if(v[i]==ele2){
            cnt2++;
        }
    }
    int mini=int(n/3)+1;
    if(cnt1>=mini){
        ls.push_back(ele1);
    }
    if(cnt2>=mini){
        ls.push_back(ele2);
    }

return ls;
}


int main(){
    vector<int> arr={1,2,3,2,3,3,3};
    int n=8;
    vector<int>ans=majorityElement(arr,n);
   for(auto it:ans){
    cout<<it<<" ";
   }
}