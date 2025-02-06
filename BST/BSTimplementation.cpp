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



Node* insertBst(Node* root,int data){
    if(root==NULL){
        root=new Node(data);
        return root;
    }
    if(data>root->data){
        root->right=insertBst(root->right,data);
    }
    else{
        root->left=insertBst(root->left,data);
    }
    return root;
}
void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertBst(root,data);
        cin>>data;
    }
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

Node* minVal(Node* root){
    Node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}

Node* maxVal(Node* root){
    Node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}

void findPreSrc(Node* root,Node* &pre,Node* &suc,int key){
    Node* curr=root;
    while(curr!=NULL){
        if(curr->data<key){
            pre=curr;
            curr=curr->right;
        }
        else if(curr->data>key){
            suc=curr;
            curr=curr->left;
        }
        else{
            //find the predecessor...
            if(curr->left){
                pre=maxVal(curr->left);
            }
            if(curr->right){
                suc=minVal(curr->right);
            }
            break;
        }
    }
}

Node* deleteBST(Node* root,int val){
    if(root==NULL){
        return NULL;
    }
    if(root->data==val){
        // 0 child...
        if(root->left==NULL&&root->right==NULL){
        delete root;
        return NULL;
        }

        // 1 child...
        if(root->left!=NULL&&root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;

        }
        if(root->left==NULL&&root->right==NULL){
            Node* temp=root->right;
            delete root;
            return temp;

        }

        // 2 child...
        if(root->left!=NULL&&root->right!=NULL){
            int mini=minVal(root->right)->data;
            root->data=mini;
            root->right=deleteBST(root->right,mini);
            return root;
        }
    }
    else if(root->data>val){
        root->left=deleteBST(root->left,val);
    }
    else{
        root->right=deleteBST(root->right,val);
    }
    
}

int main(){
    Node* root=NULL;
    cout<<"taking input from user -> ";
    takeInput(root);
    cout<<"printing level order traversal -> "<<endl;
    levelOrderTraversal(root);
    cout<<"inOrder Traversal... "<<endl;
    inorderTraversal(root);
    cout<<endl;
    cout<<"postOrder Traversal... "<<endl;
    postorderTraversal(root);
    cout<<endl;
    cout<<"preOrder Traversal... "<<endl;
    preorderTraversal(root);
    int val=60;
    root=deleteBST(root,val);
    cout<<endl;
    cout<<"printing level order traversal -> "<<endl;
    levelOrderTraversal(root);

    cout<<"Minimum value -> "<<minVal(root)->data<<endl;
    cout<<"Maximum value -> "<<maxVal(root)->data<<endl;

    Node* pre=NULL;
    Node* suc=NULL;
    int key=50;
    findPreSrc(root,pre,suc,key);
    if(pre!=NULL){
        cout<<"Predecessor -> "<<pre->data<<endl;
    }
    else{
        cout<<"no";
    }
    if(suc!=NULL){
        cout<<"Successor -> "<<suc->data;
    }
    else{
        cout<<"no";
    }

}