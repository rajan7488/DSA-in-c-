#include<bits/stdc++.h>
using namespace std;

int power(int n){
    if(n==0){
        return 1;
    }
    if(n%2==0){
        return power(n-1)*power(n-1);
    }
    else{
        return 2*power(n-1)*power(n-1);
    }
}



int main(){
    int n=5;
    cout<<power(n);
}