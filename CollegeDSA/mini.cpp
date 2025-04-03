#include<bits/stdc++.h>
using namespace std;

// Brute force..
int maximumSumSubArray(vector<int>&arr,int k){
    int mini=INT_MAX;
    int sum=0;
    int n=arr.size();
    for(int i=0;i<k;i++){
        sum=0;
        for(int j=i;j<i+(n-k);j++){
            sum+=arr[j];
            
        }
        mini=min(sum,mini);
    }
    return mini;
}


//optimization Code...
// int maximumSumSubArray(vector<int>&arr,int k){
//     int sum=0;
//     int mini=INT_MAX;
//     int n=arr.size();
//     for(int i=0;i<n-k;i++){
//         sum+=arr[i];
//     }
//     mini=sum;
//     for(int i=n-k;i<arr.size();i++){
//         sum=sum+arr[i]-arr[i-(n-k)];
//         mini=min(mini,sum);
//     }
//     return mini;
// }


int main(){
    vector<int>arr={1,2,3,4,5,6,1};
    int k=3;
    cout<<"Maximum sum SubArray -> "<<maximumSumSubArray(arr,k);
}