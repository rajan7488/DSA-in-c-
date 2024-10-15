#include<iostream>
using namespace std;

int minIndex(int a[], int i, int j)
{
    if (i == j)
        return i;
 
    // Find minimum of remaining elements
    int k = minIndex(a, i + 1, j);
 
    // Return minimum of current and remaining.
    return (a[i] < a[k])? i : k;
}

void selectionSort(int *arr,int n,int index=0){
    if(index==n){
        return ;
    }
    int k=minIndex(arr,index,n-1);
    if(k!=index){
        swap(arr[k],arr[index]);
    }
    selectionSort(arr,n,index+1);
}

int main(){
    int arr[]={2,1,4,3,5};
    int n=5;
    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}