#include<iostream>
using namespace std;

#include <bits/stdc++.h>

//using map t.c=0(n),sc=o(n)
// int majorityElement(vector<int>&arr,int n){
//     map<int,int>mpp;
//     for(int i=0;i<n;i++){
//         mpp[arr[i]]++;
//     }
//     for(auto it:mpp){
//         if(it.second>n/2){
//             return it.first;
//         }
//     }
//     return -1;
// }

//solve using moore algoritm

int majorityElement(vector<int>&arr,int n){
    int cnt=0;
    int ele;
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            ele=arr[i];
        }
        else if(arr[i]==ele){
            cnt++;
        }
        else{
            cnt--;
        }
    } 
    //check ele is majority or not;
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            cnt1++;
        }
    }
    if(cnt1>n/2){
        return ele;
    }
    return -1;
}
int main(){
    vector<int>arr={2, 2, 1, 1, 1, 2, 2};
    int n=7;
    int ans=majorityElement(arr,n);
    cout<<"majority element is the -> "<<ans;
}