#include<iostream>
using namespace std;

//using without extra space...
// void solve(int arr[],int n){
//     int temp=arr[0];
//     for(int i=0;i<n;i++){
//         arr[i]=arr[i+1];
//     }
//     arr[n-1]=temp;
// }
// void printArr(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

//using extra space...
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    // printArr(arr,n);
    // solve(arr,n);
    // printArr(arr,n);

    int temp[n];
    for(int i=1;i<n;i++){
        temp[i-1]=arr[i];
    }
    temp[n-1]=arr[0];
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
    cout<<endl;
}