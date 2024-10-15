#include<iostream>
using namespace std;

int mysqrts(int n){
    int low=0;
    int high=n;
    int mid=low+(high-low)/2;
    int ans=-1;
    while(low<=high){
    int square=mid*mid;
        if(square==n){
           ans=mid;
        }
        else if(square<n){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        mid=low+(high-low)/2;
    }
    return ans;
}
    //        while(low<=high){
    //         long long int square=mid*mid;
    //         if(square==n){
    //             return mid;
    //         }
    //         if(square<n){
    //             ans=mid;
    //             low=mid+1;
    //         }
    //         else{
    //             high=mid-1;
    //         }
    //         mid=low+(high-low)/2;
    //     }
    //     return ans;
    // }

int main(){
    int n;
    cin>>n;
    cout<<mysqrts(n);
}
