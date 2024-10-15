#include<iostream>
using namespace std;


int main(){
    /*
    int arr[10]={2,5,7,8,9};

    cout<<"Address of the first memomy block is - > "<<arr<<endl;
    cout<<sizeof(arr)<<endl;
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr+1);

    int i=3;
    cout<<i[arr]<<endl;
    // cout<<arr[i];
    

   int arr[10];
  //ERROR
//    aar=arr+1;
      cout<<&arr<<endl;
      int *ptr=&arr[0];
      cout<<ptr<<endl;
      ptr=ptr+1;
      cout<<ptr;
      */

     char ch[6]="abcde";
     char *c=&ch[0];
    //  prints entire string...
     cout<<c<<endl;

     char temp='e';
     char *p=&temp;
     cout<<p;
}