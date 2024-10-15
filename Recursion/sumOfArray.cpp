#include<iostream>
using namespace std;

int getSum(int arr[],int n){
    //Base Case
    if(n==0){
        return  0;
    }
    if(n==1){
        return arr[0];
    }
    int remainingPart=getSum(arr+1,n-1);
    int sum=arr[0]+remainingPart;
    return sum;

}

int main(){
    int arr[]={3,2,5,1,6};
    int n=5;
    int ans=getSum(arr,n);
    cout<<"Sum of array is -> "<<ans;
}