#include<bits/stdc++.h>
using namespace std;


vector< int >findUnion(int arr1[],int arr2[],int n,int m){
    int i=0,j=0;
    vector<int>Union;
    while(i<n&&j<m){
        if(arr1[i]<=arr2[j]){
            if(Union.size()==0||Union.back()!=arr1[i]){
                Union.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(Union.size()==0||Union.back()!=arr2[j]){
                Union.push_back(arr2[j]);
            }
            j++;            
        }
    }
    while(i<n){
            if(Union.back()!=arr1[i]){
                Union.push_back(arr1[i]);
            }
            i++;
    }
    while(j<m){
            if(Union.back()!=arr2[j]){
                Union.push_back(arr2[j]);
            }
            j++;
    }
    return Union;
}

int main(){
  int n = 10, m = 7;
  int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    vector<int>Union=findUnion(arr1,arr2,n,m);
    for(auto & val : Union){
        cout<<val<<" ";
    }
}