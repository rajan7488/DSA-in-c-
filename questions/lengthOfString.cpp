#include<iostream>
using namespace std;

void reverse(char name[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int lengthofstr(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout<<"Enter your name ";
    cin>>name;
    name[2]='\0';
    cout<<name<<endl;
    // int len=lengthofstr(name);
    // cout<<"length "<<lengthofstr(name)<<endl;
    // reverse(name,len);
    // cout<<name<<endl;

    string s="abc10c";
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }


}