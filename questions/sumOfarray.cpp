#include<iostream>
using namespace std;

int sumOfarray(int num[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=num[i];
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int num[100];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    cout<<"Sum of array is "<<sumOfarray(num,n)<<endl;
}