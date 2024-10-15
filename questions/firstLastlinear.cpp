#include<iostream>
using namespace std;
int main(){
    int arr[8]={2,3,4,5,6,2,1,4};
    int n=8;
    int key=4;
    int ans=-1;
    int result=-1;
    //for solve this problem i can use the linear search and the time complexity of the linear search is o(n).
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            if(ans==-1){
                ans=i;
            }
        result=i;
        }
        
    }
    cout<<ans<<" ";
    cout<<result;
}