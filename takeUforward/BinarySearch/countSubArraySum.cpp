#include<bits/stdc++.h>
using namespace std;
//brute force approach 
// Time complexity -> 0(n*2)
int subArraySum(int arr[],int n,int k){
    int cnt=0;
    for(int i=0;i<n;i++){
        int ans=0;
        for(int j=i;j<n;j++){
            ans+=arr[j];
            if(ans==k){
                cnt++;
            }
        }
    }
    return cnt;
}

int main(){
    int arr[]={1,2,3};
    int n=3;
    int k=6;
    cout<<"Count sub array sum -> "<<subArraySum(arr,n,k);
}