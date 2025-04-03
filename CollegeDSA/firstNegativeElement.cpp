#include<bits/stdc++.h>
using namespace std;
vector<int> firstNegativeInteger(vector<int> &arr, int n, int k){
    vector<int>result;
    for(int i=0;i<=n-k;i++){
        for(int j=i;j<i+k;j++){
            
            if(arr[j]<0){
                result.push_back(arr[j]);
                break;

            }
            if(j==i+k-1){
                result.push_back(0);
            }
        }
    }
    return result;
}


int main(){
    vector<int>arr={-10, 20, -30, -40, 50, 60, -70, 80, 90};
    int k=3;
    int n=9;
    vector<int>result=firstNegativeInteger(arr,n,k);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ,";
    }
}