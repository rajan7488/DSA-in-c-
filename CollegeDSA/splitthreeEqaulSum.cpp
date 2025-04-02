#include<bits/stdc++.h>
using namespace std;

vector<int>splitThreeEqualSum(vector<int>&arr){
    int totalSum=accumulate(arr.begin(),arr.end(),0);
    vector<int>result;
    if(totalSum%3!=0){
        result={-1,-1};
        return result;
    }
    int partitionSum=totalSum/3;
    int currSum=0;
    for(int i=0;i<arr.size();i++){
        currSum+=arr[i];
        if(currSum==partitionSum){
            result.push_back(i);
            currSum=0;
        }
        if(result.size()==2&&i<arr.size()){
            return result;
        }
    }
    result={-1,-1};
    return result;
}

int main(){
    vector<int>arr={1,3,1,5,5};

    vector<int>result=splitThreeEqualSum(arr);
    cout<<"Split Equal sum -> "<<result[0]<<","<<result[1];
}