#include<bits/stdc++.h>
using namespace std;

int countPartition(vector<int>&arr,int maxSum){
    int partiton=1;
    int subArraySum=0;
    for(int i=0;i<arr.size();i++){
        if(subArraySum+arr[i]<=maxSum){
            subArraySum+=arr[i];
        }
        else{
            partiton++;
            subArraySum=arr[i];
        }
    }
    return partiton;
}

//Brute Force...
// int splitArray(vector<int>&arr,int m){
//     int low=*max_element(arr.begin(),arr.end());
//     int high=accumulate(arr.begin(),arr.end(),0);
//     for(int maxSum=low;maxSum<=high;maxSum++){
//         if(countPartition(arr,maxSum)==m){
//             return maxSum;
//         }
//     }
//     return low;
// }

// code optimaization...
// Binary search...

int splitArray(vector<int>&arr,int m){
    int low=*max_element(arr.begin(),arr.end());
    int high=accumulate(arr.begin(),arr.end(),0);
    while(low<=high){
        int mid=(low+high)/2;
        if(countPartition(arr,mid)>m){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}


int main(){
    vector<int>arr={10,20,30,40};
    int m=2;
    cout<<" The largest sum of the spliting array is -> "<<splitArray(arr,m);
}