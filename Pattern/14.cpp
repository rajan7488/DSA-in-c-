#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
    int value=i;
        for(int k=1;k<=i-1;k++){
            cout<<"  ";
        }
        for(int j=1;j<=n-i+1;j++){
            cout<<value<<" ";
            value=value+1;
        }
        cout<<endl;
    }
}