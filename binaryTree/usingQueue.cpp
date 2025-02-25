//Creating binary tree using queue
#include <iostream>
#include <queue>
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
int main(){
    int x;
    cout<<"Enter the root node: ";
    cin>>x;
    int first;
    int second;
    queue<Node*> q;
    Node* root = new Node(x);
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        cout<<"Enter the left child of "<<temp->data<<": ";
        cin>>first;
        if(first!=-1){
            temp->left=new Node(first);
            q.push(temp->left);
        }
        cout<<"Enter the right child of" <<temp->data<<": ";
        cin>>second;
        if (second!=-1){
            temp->right=new Node(second);
            q.push(temp->right);
        }
        
     }
}