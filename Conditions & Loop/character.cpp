#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    int ascii=ch;
    if(ascii>=65&&ch<=90){
        cout<<"Uppercase";
    }
    else if(ch>='a'&&ch<='z'){
        cout<<"Lowercase";
    }
    else if(ch>=0&&ch<=9){
        cout<<"Integer digit";
    }
}

