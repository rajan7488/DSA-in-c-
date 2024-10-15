#include<iostream>
using namespace std;
int main(){
    int ammount=1330;
    int Rs100,Rs50,Rs20,Rs1;
    switch(1){
        case 1:{
            Rs100=ammount/100;
            ammount=ammount%100;
            cout<<"100 notes required "<<Rs100<<endl;
        }
        case 2:{
            Rs50=ammount/50;
            ammount=ammount%50;
            cout<<"50 notes required "<<Rs50<<endl;
        }
        case 3:{
            Rs20=ammount/20;
            ammount=ammount%20;
            cout<<"20 notes required "<<Rs20<<endl;
        }
        case 4:{
            Rs1=ammount/1;
            ammount=ammount%1;
            cout<<"1 notes required "<<Rs1;
        }
    }
}