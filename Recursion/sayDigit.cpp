#include<iostream>
using namespace std;

void sayDigit(int n,string arr[]){
    //Base Case
    if(n==0){
        return;
    }
    //Processing
    int digit=n%10;
    n=n/10;
    //recurrence Relation
    sayDigit(n,arr);
    cout<<arr[digit]<<" ";
}

int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    cout<<endl;
    sayDigit(n,arr);
}