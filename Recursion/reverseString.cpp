#include<iostream>
using namespace std;

void reverse(string *str,int i){
    int n=str.length();
    if(i>n-i-1){
        return;
    }
    swap(str[i],str[n-i-1]);
    i++;
    //Recursive call
    reverse(str,i);
}

int main(){
    string name="rajan";
    reverse(name,0);
    cout<<name;
}