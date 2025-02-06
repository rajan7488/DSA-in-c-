#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data=d;
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

void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node*temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            } 
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
void inorderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}

void postorderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<" ";

}

void preorderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void buildFromLevelOrderTraversal(Node* &root){
    queue<Node*>q;
    cout<<"Enter the Data -> "<<endl;
    int data;
    cin>>data;
    root=new Node(data);
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        cout<<"Enter the data for left root -> "<<temp->data<<endl;
        int leftData;
        cin>>leftData;
        if(leftData!=-1){
            temp->left=new Node(leftData);
            q.push(temp->left);
        }
        cout<<"Enter the data for right root -> "<<temp->data<<endl;
        int rightData;
        cin>>rightData;
        if(rightData!=-1){
            temp->right=new Node(rightData);
            q.push(temp->right);
        }
    }
}
//1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

int main(){
    Node* root=NULL;
    // root=buildTree(root);
    buildFromLevelOrderTraversal(root);
    cout<<"level order Traversal ... "<<endl;
    levelOrderTraversal(root);
    cout<<"inOrder Traversal... "<<endl;
    inorderTraversal(root);
    cout<<endl;
    cout<<"postOrder Traversal... "<<endl;
    postorderTraversal(root);
    cout<<endl;
    cout<<"preOrder Traversal... "<<endl;
    preorderTraversal(root);

}