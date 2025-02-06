#include<bits/stdc++.h>
using namespace std;

int squareRoot(int n){
    int l=1;
    int h=n;
    

    while(l<=h){
        int mid=(l+h)/2;
        if(mid*mid<=n){
            
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return h;
}



int main(){
    cout<<"Enter the Number -> "<<endl;
    int n;
    cin>>n;
    cout<<"Square Root of this number is -> "<<squareRoot(n);

}