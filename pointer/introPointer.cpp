#include<iostream>
using namespace std;
void Q(int z)
{
  z += z;
  cout<<z << " ";
}

void P(int *y) 
{
  int x = *y + 2;
  Q(x);
  *y = x - 1; 
  cout<<x << " ";
}


int main(){
    int num=6;
    cout<<num<<endl;
    cout<<"Address of the num "<<&num<<endl;
    int *ptr=&num;
    cout<<"Value of ptr "<<*ptr<<endl;
    cout<<"Address of ptr "<<ptr<<endl;

    //coping a pointer
    // int *p=ptr;
    // cout<<p<<"->"<<ptr<<endl;
    // cout<<*p<<"->"<<*ptr<<endl;

    //  p=p+1;
    //  cout<<"Before"<<p<<endl;

float f = 10.5;
float p1 = 2.5;
float* ptr1 = &f;
(*ptr1)++;
*ptr1 = p1;
cout << *ptr1 << " "<< f << " " << p1;

   char *x = "ninjasquiz";
   char *y = "codingninjas";
   char *t;
   swap(x, y);
   cout<<x << " "<<y;
   t = x;
   x = y;
   y = t; 
   cout<<" "<<x<< " "<<y;


}