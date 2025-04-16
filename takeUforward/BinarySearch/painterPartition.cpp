#include<bits/stdc++.h>
using namespace std;

int countPainter(vector<int>&arr,int time){
    int painter=1;
    int boardsPainter=0;
    for(int i=0;i<arr.size();i++){
        if(boardsPainter+arr[i]<=time){
            boardsPainter+=arr[i];
        }
        else{
            painter++;
            boardsPainter=arr[i];
        }
    }
    return painter;
}


int painterPartiton(vector<int>&arr,int k){
    int low=*max_element(arr.begin(),arr.end());
    int high=accumulate(arr.begin(),arr.end(),0);
    while(low<=high){
        int mid=(low+high)/2;
        if(countPainter(arr,mid)>k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}



int main(){
    vector<int>arr={10,20,30};
    int k=1;
    cout<<"partiton of painter -> "<<painterPartiton(arr,k);
}