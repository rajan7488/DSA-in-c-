#include<bits/stdc++.h>
using namespace std;

int rowWithMax1s(vector<vector<int>> &matrix,int n,int m){
    int cnt_max=0;
    int row_Index=-1;
    for(int row=0;row<n;row++){
        int cnt_ones=0;
        for(int col=0;col<m;col++){
            cnt_ones+=matrix[row][col];
        }
        if(cnt_ones>cnt_max){
            cnt_max=cnt_ones;
            row_Index=row;
        }
    }
    return row_Index;
}


int main(){
    vector<vector<int>> matrix = {{0, 1, 1}, {1, 1, 1}, {0, 0, 0}};
    int n = 3, m = 3;
    cout << "The row with maximum no. of 1's is: " <<
         rowWithMax1s(matrix, n, m) << '\n';
}
