#include<iostream>
using namespace std;

int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        //for left asterisk...
        for(int j=0;j<=i-1;j++){
            cout<<"*";
        }
        //space...
        for(int k=0;k<2*(n-i);k++){
            cout<<" ";
        }
        for(int j=0;j<=i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}