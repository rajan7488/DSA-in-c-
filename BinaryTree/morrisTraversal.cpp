#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;

    }
};

Node* buildTree(Node* root){
    cout<<"Enter the data -> "<<endl;
    int data;
    cin>>data;
    root=new Node(data);
    if(data==-1){
        return NULL;
    }

    cout<<"Enter data for inserting in Left -> "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data for inserting in Right -> "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

void morrisTraversal(Node* root){
    Node* curr=root;
    while(curr!=NULL){
        if(curr->left==NULL){
            cout<<curr->data<<" ";
            curr=curr->right;
        }
        else{
            Node* pre=curr->left;
            while(pre->right&&pre->right!=curr){
                pre=pre->right;
            }
            if(pre->right==NULL){
                pre->right=curr;
                curr=curr->left;
            }
            else{
                pre->right=NULL;
                cout<<curr->data<<" ";
                curr=curr->right;
        }
        }
    }
}

int main(){
    Node* root=NULL;
    root=buildTree(root);
    morrisTraversal(root);
}