#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;
    int col;

    //dynamic array creation
    int **arr=new int*[row];
    int *sizes= new int[row]; 
    for(int i=0;i<row;i++){
        cin>>col;
        sizes[i]=col;
        // *(arr+1)=new int[sizes[i]];
    }

    //taking user input 
    int num=1;
    for(int i=0;i<row;i++){
        for(int j=0;j<sizes[i];j++){
            cin>>arr[i][j];
            // arr[i][j] = num++; 
        }
    }

    cout << "elements in matrix form as follow" << endl; 
    cout<<endl;

    //printing output
    for(int i=0;i<row;i++){
        for(int j=0;j<sizes[i];j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //Releasing dynamic array
    // for(int i=0;i<row;i++){
    //     delete[] arr[i];
    // }
    // delete[] arr;
}







