#include<bits/stdc++.h>
using namespace std;

// int maximumSumSubArrat(int arr[],int n){
//     int maxi=0;
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=i;j<n;j++){
//             sum+=arr[j];
//             maxi=max(maxi,sum);
//         }
//     }
//     return maxi;
// }

//kadane's algorithm
int maximumSumSubArrat(int arr[],int n){
    long long maxi=LONG_MIN;
    long long sum=0;
    int start;
    int ansStart=-1;
    int ansEnd=-1;
    for(int i=0;i<n;i++){
        if(sum==0){
            start=i;
        }
        sum+=arr[i];
        
        if(sum>maxi){
            maxi=sum;
            ansStart=start;
            ansEnd=i;
        }
        if(sum<0){
            sum=0;
        }
    }
    cout<<"[";
    for(int i=ansStart;i<=ansEnd;i++){
        
        cout<<arr[i]<<" ";
    }
    cout<<"]";
    cout<<endl;
    return maxi;
}

int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=9;
    int ans=maximumSumSubArrat(arr,n);
    cout<<"Maximum subarray sum is -> "<<ans;
}