#include<iostream>
#include<stack>
using namespace std;

int main(){
    string name="rajan";
    stack<char>s;
    for(int i=0;i<name.length();i++){
        char ch=name[i];
        s.push(ch);
    }
    string ans="";
    while(!s.empty()){
        char ch=s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout<<"String is -> "<<name<<endl;
    cout<<"Reverse string is "<<ans;
}