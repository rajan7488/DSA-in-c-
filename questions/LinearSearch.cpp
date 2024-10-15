#include<iostream>
using namespace std;

int search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;

}

int main(){
    int arr[]={2,3,4,5,6};
    int key;
    cin>>key;
    int found=search(arr,5,key);
    if(found){
        cout<<"Key is present";
    }
    else{
        cout<<"Key is absent";

}