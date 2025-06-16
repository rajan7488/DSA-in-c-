#include<bits/stdc++.h>
using namespace std;

int power(int n){
    if(n==0){
        return 1;
    }
    int ans=power(n/2);
    if(n%2==0){
        return ans*ans;
    }
    else{
        return 2*ans*ans;
    }
}



int main(){
    int n=5;
    cout<<power(n);
}