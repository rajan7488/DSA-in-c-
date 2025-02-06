#include<bits/stdc++.h>
using namespace std;

vector<int>leaderArr(vector<int>arr,int n){
    // int n=arr.size();
    vector<int>ans;

    //brute force t.c=o(n^2)s.c=o(n)
//     for(int i=0;i<n;i++){
//         bool leader=true;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]>arr[i]){
//                 // ans.push_back(arr[i]);
//                 leader=false;
//                 break;
//             }

//         }
//         if(leader){
//                 ans.push_back(arr[i]);
//             }
//     }
//     // ans.push_back(arr[n-1]);

//     return ans;

// optiml solution
int max=arr[n-1];
ans.push_back(arr[n-1]);
for(int i=n-1;i>=0;i--){
    if(arr[i]>=max){
        ans.push_back(arr[i]);
        max=arr[i];
    }
}
reverse(ans.begin(),ans.end());
return ans;
}

int main(){
    vector<int>arr={4,7,1,0};
    int n=4;
    cout<<"[";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
    cout<<endl;
    vector<int>ans=leaderArr(arr,n);
    cout<<"[";

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<"]";

}