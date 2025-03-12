#include<bits/stdc++.h>
using namespace std;


int findprefixValue(vector<int>&prefixSum,int n){
    vector<vector<int>>queries(n);
    cout<<"Enter the queries l,r"<<endl;
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        queries[i]={l,r};
    }
    cout<<"Queries Result-> "<<endl;
    for(int i=0;i<n;i++){
        int l=queries[i][0],r=queries[i][1];
        if(l==0){
            cout<<prefixSum[r]<<endl;
        }
        else{
        cout<<prefixSum[r]-prefixSum[l-1]<<endl;
        }
    }

}



int main(){
    cout<<"Enter the array of size -> ";
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"[ ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ,";

    }
    cout<<"]";
    vector<int> prefixSum(n);
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
    cout<<endl;
    cout<<"Enter the queriries -> ";
    int q;
    cin>>q;


    findprefixValue(prefixSum, q);


}