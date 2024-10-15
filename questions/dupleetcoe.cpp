#include<iostream>
using namespace std;

int main(){
    int arr[8]={2,3,4,5,2,3,7,7};
    int n=8;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
            }
        }
    }
}