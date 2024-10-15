// #include<iostream>
// using namespace std;

// int setA(int a){
//     int count=0;
//     while(a!=0){
//         if(a&1){
//             count++;
//             // cout<<count<<endl;
//         }
//         a=a>>1;
//     }
//     return count;
// }
// int setB(int b){
//     int count=0;
//     while(b!=0){
//         if(b&1){
//             count++;
//     // cout<<count<<endl;
//         }
//         b=b>>1;
//     }
//     return count;
// }   

// int main(){
//     int a,b;
//     cin>>a>>b;
//     int ans1=setA(a);
//     int ans2=setB(b);
//     int ans=ans1+ans2;
//     cout<<ans;

// }

//Power of two is on the given no is or not ?

#include<iostream>
using namespace std;

int power(int n){
        int count=0;
    while(n!=0){
    int bit=n&1;
    if(bit==1){
        count++;
    }
    n=n>>1;
    }
    if(count==1){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    cout<<power(n);

}
