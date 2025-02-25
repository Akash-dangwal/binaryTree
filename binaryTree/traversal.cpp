#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left, *right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};
Node* BinaryTree(){
        int x;
        cin>>x;
        if(x==-1) return NULL;
        Node* temp=new Node(x);
        cout<<"Enter the left child of "<<x<<": ";
        temp->left=BinaryTree();
        cout<<"Enter the right child of "<<x<<": ";
        temp->right=BinaryTree();
        return temp;
    }

    void PreOrder(Node* root){
        if(root==NULL) return;
        cout<<root->data<<" ";
        PreOrder(root->left);
        PreOrder(root->right);
    }

    void InOrder(Node* root){
        if(root==NULL) return;
        InOrder(root->left);
        cout<<root->data<<" ";
        InOrder(root->right);
    }


    void PostOrder(Node* root){
        if(root==NULL) return;
        PostOrder(root->left);
        PostOrder(root->right);
        cout<<root->data<<" ";
    }

int main(){
    
   
    cout<<"Enter the root node: ";
    Node* root;
   root= BinaryTree();

   cout<<"PreOrder: ";
   PreOrder(root);
   cout<<"\nInOrder: ";
   InOrder(root);
   cout<<"\nPostOrder";
   PostOrder(root);
}