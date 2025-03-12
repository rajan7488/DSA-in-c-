#include<bits/stdc++.h>
using namespace std;
int palidromeCheck(string s){
    int left=0;
    int right=s.size()-1;
    while(left<=right){
        if(s[left]!=s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main(){
    string s="abcba";
   int ans=palidromeCheck(s);
   if(ans){
    cout<<"palindrome Number";
   }
   else{
    cout<<"palindrome No";
   }

}
