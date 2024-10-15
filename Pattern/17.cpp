#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i+1;k++){
            cout<<k;
        }
        for(int j=1;j<=i-1;j++){
            cout<<"*";
        }
        for(int j=1;j<=i-1;j++){
            cout<<"*";
        }
        for(int j=n-i+1;j>=1;j--){
            cout<<j;
        }
        cout<<endl;

    }

}