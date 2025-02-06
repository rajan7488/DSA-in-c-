#include<bits/stdc++.h>
using namespace std;
//memoization method...
int fib(int n,vector<int>&dp){
    if(n==1||n==0){
        return n;
    }

    // step-2
    if(dp[n]!=-1){
        return dp[n];
    }
    //step-3
    dp[n]=fib(n-1,dp)+fib(n-2,dp);
    return dp[n];

}

int main(){
    int n;
    cin>>n;

    // //step-1
    // vector<int>dp(n+1);
    // for(int i=0;i<=n;i++){
    //     dp[i]=-1;
    // }
    // cout<<fib(n,dp);
    //space optimaization method...
    int prev1=0;
    int prev2=1;
    for(int i=2;i<=n;i++){
        int curr=prev1+prev2;
        prev1=prev2;
        prev2=curr;
    }
    cout<<prev2;
}