#include<iostream>
using namespace std;

void rowSum(int arr[][3],int row,int col){
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum+=arr[row][col];
        }
        cout<<"row sum ->"<<sum<<" ";
    }
    cout<<endl;
}

void colSum(int arr[][3],int row,int col){
    for(int col=0;col<3;col++){
        int sum=0;
        for(int row=0;row<3;row++){
            sum+=arr[row][col];
        }
        cout<<"col sum ->"<<sum<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[3][3];
    //take input un 2d array
    cout<<"Enter the array element"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    rowSum(arr,3,3);
    colSum(arr,3,3);
}