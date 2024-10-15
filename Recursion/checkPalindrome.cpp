#include<iostream>
using namespace std;

bool checkPalindrome(string str,int i,int j){
    //Base Case
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
        return checkPalindrome(str,i+1,j-1);
    }
}



int main(){
    string name="RnajanR";
    cout<<endl;
    
    bool isPalindrome=checkPalindrome(name,0,name.length()-1);
    if(isPalindrome){
        cout<<"It is a palindrome";
    }
    else{
        cout<<"It is not a palindrome";
    }

}