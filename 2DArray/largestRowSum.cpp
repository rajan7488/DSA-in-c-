#include<iostream>
using namespace std;

int largestRowsum(int arr[][3],int row,int col){
    int maxi=arr[0][0];
    int rowIndex=-1;
        for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum+=arr[row][col];
        }
        if(sum>maxi){
            maxi=sum;
            rowIndex=row;
        }
    }
    cout<<"Maximum row sum is -> "<<maxi<<endl;
    return rowIndex;
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

    int ansIndex=largestRowsum(arr,3,3);
    cout<<"Largest row sum index is -> "<<ansIndex;

}