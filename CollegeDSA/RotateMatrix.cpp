#include<iostream>
using namespace std;


void rotateImage(int arr[][4],int row,int col){
        int startingRow=0;
        int endingRow=row-1;
        int startingCol=0;
        int endingCol=col-1;
        int count=0;
        int total=row*col;

        while(count<total){
            for(int index=endingRow;index>=startingRow;index--){
               cout<<arr[index][startingCol]<<" ";
                count++;
            }
            startingCol++;
            cout<<endl;
        }
}

int main(){

    int arr[4][4];
    //take input un 2d array
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int k=1;
    rotateMatrx(arr,4,4);
}