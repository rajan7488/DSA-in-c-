#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    Node* left;
    Node* right;
    int data;
    Node(int x){
        data=x;
        left=NULL;
        right=NULL;

    }

};

void inorder(Node* root,vector<int>&inorderArr){
    if(root==NULL){
        return;
    }
    inorder(root->left,inorderArr);
    inorderArr.push_back(root->data);
    inorder(root->right,inorderArr);
}

void preorder(Node* root,vector<int>&inorderArr,int& index){
    if(root==NULL){
        return;
    }
    root->data=inorderArr[index++];
    preorder(root->left,inorderArr,index);
    preorder(root->right,inorderArr,index);
}

void convetBSTToMinHeap(Node* root){
    vector<int>inorderArr;
    inorder(root,inorderArr);
    int index=0;
    preorder(root,inorderArr,index);
}
void print(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
int main(){
        Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(5);
    root->right->right = new Node(7);
    print(root);
    cout<<endl;
    convetBSTToMinHeap(root);
    print(root);
}