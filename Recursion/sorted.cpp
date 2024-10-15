#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){
    //Base Case
    if(n==0||n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return isSorted(arr+1,n-1);
    }

}

int main(){

    int arr[]={2,4,1,9,11,13};
    int n=6;
    if(isSorted(arr,n)){
        cout<<"Array is Sorted";
    }
    else{
        cout<<"Array is not Sorted";
    }
}