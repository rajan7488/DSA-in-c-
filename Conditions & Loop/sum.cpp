#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    int i=1;
    cout<<"Enter the Number";
    cin>>n;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<sum;
}