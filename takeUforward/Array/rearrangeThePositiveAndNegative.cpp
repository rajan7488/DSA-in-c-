#include<bits/stdc++.h>
using namespace std;

// vector<int> rearrangeEle(vector<int>arr,int n){
//     vector<int>pos;
//     vector<int>neg;
//     for(int i=0;i<n;i++){
//         if(arr[i]>0){
//             pos.push_back(arr[i]);
//         }
//         else{
//             neg.push_back(arr[i]);
//     }
//     }

//     //filling the pos and neg value in main array in alternating way...
//     for(int i=0;i<arr.size();i++){
//         arr[2*i]=pos[i];
//         arr[2*i+1]=neg[i];

//     }

//     return arr;
 
// }

vector<int>rearrangeEle(vector<int>A){
    int n=A.size();
    vector<int>ans(n);
    int posIndex=0;
    int negInedex=1;
    for(int i=0;i<n;i++){
        if(A[i]<0){
            ans[negInedex]=A[i];
            negInedex+=2;
        }
        else{
            ans[posIndex]=A[i];
            posIndex+=2;
        }
    }
    return ans;
}

int main(){
    // int arr[]={1,2,-3,-5,6,7,-2,-1};//3,-2,1,-5,2,-4
    vector<int> arr={28,-41,22,-8,-37,46,35,-9,18,-6,19,-26,-37,-10,-9,15,14,31};//[28,-41,22,-8,46,-37,35,-9,18,-6,19,-26,15,-37,14,-10,31,-9]
    int n=18;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int>ans =rearrangeEle(arr);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}