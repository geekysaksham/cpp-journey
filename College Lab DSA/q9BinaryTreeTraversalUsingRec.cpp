#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int data) : val(data), left(NULL), right(NULL){}
};
void preorder(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root){
    if(root == NULL) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
void postorder(Node* root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
}
int main(){
    // Creating nodes
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    // Connecting nodes for binary tree
    a->left = b; a->right = c;
    b->left = d; b->right = e;
    c->left = f; c->right = g;
    cout<<"Preorder : "; preorder(a); cout<<endl;
    cout<<"Inorder : "; inorder(a); cout<<endl;
    cout<<"Postorder : "; postorder(a); cout<<endl;
}