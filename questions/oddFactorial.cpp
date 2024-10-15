#include<iostream>
using namespace std;
#include<math.h>
long long oddfact(int n){
        long long f=1;
    int m=pow(10,9)+7;
    while(n>0){
        if(n%2!=0){
        f=((f)*(n%m))%m;
        }
        n--;
    }
    return f;
}
long long oddfactfor(int n){
        long long factorial=1;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            factorial=factorial*i;
        }
    }
    return factorial ;
}

int main(){
    int n;
    cin>>n;
    cout<<"while -> "<<oddfact(n)<<endl;
    cout<<"for -> "<<oddfactfor(n);
}
