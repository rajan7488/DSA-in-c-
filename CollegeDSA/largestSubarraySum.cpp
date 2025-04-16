#include<bits/stdc++.h>
using namespace std;

// int largestSumSubArray(vector<int>&arr,int target_sum){
//     int ans=0;
//     int start=-1;
//     int end=-1;
//     // int sum=0;
//     int maxi=0;
//     for(int i=0;i<arr.size();i++){
//         int start=i;
//         int sum=0;
//         for(int j=i;j<arr.size();j++){
//             sum+=arr[j];
//             if(target_sum==sum){
//                 int end=j;
//                 ans=(j-i)+1;
//             }
//             else if(sum>target_sum){
//                 sum-=arr[i];
//                 break;
//             }
//             if(ans>maxi){
//                 maxi=ans;
//             }
//         }
//     }
//     return maxi;
// }

int largestSumSubArray(vector<int>&arr,int target_sum){
    int ans=0;
    int start=0;
    int end=0;
    int sum=0;
    int maxi=0;
    for(int i=0;i<arr.size();i++){
        if(sum==0){
            start=i;
        }
        if(sum<=target_sum){
        if(sum==target_sum){
            
            ans=(end-start)+1;
        }
        end++;
        sum+=arr[i];
    }
        else if(sum>target_sum){
            sum-=arr[start];
            start++;
        }
        if(start>end){
            end=start;
            sum=arr[end];
        }
        if(ans>maxi){
            maxi=ans;
        }
    }
    return maxi;
}

int main(){
    vector<int>arr={1,2,3,4,4,1,1,1};
    int target_sum=3;
    cout<<largestSumSubArray(arr,target_sum);
}