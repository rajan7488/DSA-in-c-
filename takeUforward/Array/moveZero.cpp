#include<iostream>
using namespace std;

void moveZero(int arr[],int n){
    //extra spcae complexity...
    // int temp[n];
    // int j=0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]!=0){
    //         temp[j++]=arr[i];
    //     }
    // }
    // while(j<n){
    //     temp[j++]=0;
    // }
    // for(int i=0;i<n;i++){
    //     arr[i]=temp[i];
    // }
    // int count=0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]!=0){
    //         arr[count++]=arr[i];
    //     }
    // }
    // while(count<n){
    //     arr[count++]=0;
    // }
    int nonZero=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[nonZero]);
        
        nonZero++;
        }
    }

}

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={1, 2, 0, 4, 3, 0, 5, 0};
    printArr(arr,8);
    moveZero(arr,8);
    printArr(arr,8);
}