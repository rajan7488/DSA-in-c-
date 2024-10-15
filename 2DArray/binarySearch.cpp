#include<iostream>
using namespace std;

bool binarySearchalgo(int arr[3][4],int row,int col,int target){
    int s=0;
    int e=row*col-1;
    int mid=s+(e-s)/2;
    // int ans=-1;
    while(s<=e){
        int element=arr[mid/col][mid%col];
        if(element==target){
            return 1;
        }
        else if(element<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return 0;
}


int main(){
    // int arr[3][4];

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // int target;
    // cin>>target;

        int arr[3][4];
    //take input un 2d array
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int target;
    cin>>target;

    if(binarySearchalgo(arr,3,4,target)){
        cout<<"Element is found";
    }
    else{
        cout<<"Not found";
    }
}