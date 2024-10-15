#include<iostream>
using namespace std;

//1->prime no
//0->Not prime

bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"Prime Number";
    }
    else{
        cout<<"Not a Prime Numvber";
    }
}