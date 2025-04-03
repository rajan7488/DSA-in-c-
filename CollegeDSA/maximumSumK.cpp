#include<bits/stdc++.h>
using namespace std;

//Brute force..
// int maximumSumSubArray(vector<int>&arr,int k){
//     int maxi=INT_MIN;
//     int sum=0;
//     for(int i=0;i<arr.size()-k;i++){
//         sum=0;
//         for(int j=i;j<(i+k);j++){
//             sum+=arr[j];
            
//         }
//         maxi=max(sum,maxi);
//     }
//     return maxi;
// }


//optimization Code...
int maximumSumSubArray(vector<int>&arr,int k){
    int sum=0;
    int maxi=INT_MIN;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    maxi=sum;
    for(int i=k;i<arr.size();i++){
        sum=sum+arr[i]-arr[i-k];
        maxi=max(maxi,sum);
    }
    return maxi;
}


int main(){
    vector<int>arr={2,6,8,4,5,3,9};
    int k=3;
    cout<<"Maximum sum SubArray -> "<<maximumSumSubArray(arr,k);
}