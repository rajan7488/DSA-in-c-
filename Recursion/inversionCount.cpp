#include<iostream>
using namespace std;


int merge(int *arr,int s,int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *first=new int[len1];
    int *second=new int[len2];

    //copy values
    int mainArrayIndex=s;
    int inversionCount=0;
    for(int i=0;i<len1;i++)
    {
        first[i]=arr[mainArrayIndex++];
    }
    mainArrayIndex=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainArrayIndex++];
    }

    //merge two sorted array
    int index1=0;
    int index2=0;
    mainArrayIndex=s;
    while(index1<len1&&index2<len2){
        if(first[index1]<second[index2]){
            arr[mainArrayIndex++]=first[index1++];
            // inversionCount++;
        }
        else{
            arr[mainArrayIndex++]=second[index2++];
            inversionCount=inversionCount+(mid-s);
        }
    }
    while(index1<len1){
            arr[mainArrayIndex++]=first[index1++];
    }
    while(index2<len2){
            arr[mainArrayIndex++]=second[index2++];
    }
    return inversionCount;
    delete[] first;
    delete[] second;
}


int mergeSort(int *arr, int s,int e){
    //Base Case
    int inversionCount=0;
    if(e>s){
        
    
    int mid =s+(e-s)/2;
    //left part sort karna h
    inversionCount+=mergeSort(arr,s,mid);
    //right part sort karna h
    inversionCount+=mergeSort(arr,mid+1,e);
    //merge
    inversionCount+=merge(arr,s,e);
    }
    return inversionCount;

}



int main(){
    int arr[4] =  {1, 2, 4, 8};
    int n = 4;
    int ans=mergeSort(arr,0,n-1);
        for(int i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
    cout<<"total inversion count is -> "<<ans;

}