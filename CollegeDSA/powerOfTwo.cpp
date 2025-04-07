#include<bits/stdc++.h>
using namespace std;

bool powerOfTwo(int n){
    while(n>1){
        if(n%2!=0){
            return false;
        }
        n=n/2;
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter the Number -> ";
    cin>>n;

    // cout<<powerOfTwo(n);
    if(powerOfTwo(n)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

}