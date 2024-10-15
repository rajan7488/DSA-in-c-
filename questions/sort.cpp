#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sortOne(int arr[],int n){
    int left=0;
    int right=n-1;
    while(left<=right){
        if(arr[left]==0){
            left++;
        }
        else if(arr[right]==1){
            right--;
        }
        else{
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
}

int main(){

    int arr[11]={1,0,1,1,0,1,0,1,0,1,1};
    sortOne(arr,11);
    printArray(arr,11);
}