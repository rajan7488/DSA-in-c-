#include<iostream>
using namespace std;

class Heap{
    public:
    int arr[100];
    int size;
    Heap(){
        arr[0]=-1;
        size=0;
    }
    void insert(int val){
        size=size+1;
        int index=size;
        arr[index]=val;
        while(index>1){
            int parent=index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return;
            }
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void deleteFromHeap(){
        if(size==0){
            cout<<"Nothing to dlt";
            return;
        }
        arr[1]=arr[size];
        size--;
        int i=1;
        while(i<size){
            int leftIndex=2*i;
            int rightIndex=2*1+1;
            if(leftIndex<size&&arr[i]<arr[leftIndex]){
                swap(arr[i],arr[leftIndex]);
                i=leftIndex;
            }
            else if(rightIndex<size&&arr[i]<arr[rightIndex]){
                swap(arr[i],arr[rightIndex]);
                i=rightIndex;
            }
            else{
                return;
            }

        }
    }

 
};
   void heapify(int arr[],int n,int i){
        int largest=i;
        int left=2*i;
        int right=2*i+1;
        if(left<=n&&arr[largest]<arr[left]){
            largest=left;
        }
        if(right<=n&&arr[largest]<arr[right]){
            largest=right;
        }
        if(largest!=i){
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }
    }
    void heapSort(int arr[],int n){
        int t=n;
        while(t>1){
            swap(arr[1],arr[t]);
            t--;
            heapify(arr,t,1);
        }
    }
int main(){
    Heap h;
    h.insert(60);
    h.insert(65);
    h.insert(66);
    h.insert(67);
    h.insert(68);
    h.insert(64);
    h.print();
    h.deleteFromHeap();
    h.print();

    int arr[6]={-1,60,62,59,65,58};
    int n=5;
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Printing Sorted Array -> "<<endl;
    heapSort(arr,n);
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }

}