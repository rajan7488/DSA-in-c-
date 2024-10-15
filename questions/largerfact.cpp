#include<iostream>
using namespace std;
#include<math.h>

long long fact(int n){
    long long f=1;
    int m=pow(10,9)+7;
    while(n>0){
        f=((f)*(n%m))%m;
        n--;
    }
    return f;
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n);
}
