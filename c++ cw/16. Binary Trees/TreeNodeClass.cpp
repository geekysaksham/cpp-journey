#include<iostream>
#include<climits>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        left = right = NULL;
    }
};
void printTree(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    printTree(root->left);
    printTree(root->right);
}
int size(Node* root){
    if(root == NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}
int sumBT(Node* root) {
    if(root == NULL) return 0;
    return root->val + sumBT(root->left) + sumBT(root->right);
}
int productBT(Node* root) {
    if(root == NULL) return 1;
    return root->val * productBT(root->left) * productBT(root->right);
}
int maxValueBT(Node* root){
    if(root == NULL) return INT_MIN;
    int leftMax = maxValueBT(root->left);
    int rightMax = maxValueBT(root->right);
    return max(root->val, max(leftMax, rightMax));
}
int minValueBT(Node* root){
    if(root == NULL) return INT_MAX;
    int leftMin = minValueBT(root->left);
    int rightMin = minValueBT(root->right);
    return min(root->val, min(leftMin, rightMin));
}
int levels(Node* root){
    if(root == NULL) return 0;
    return 1 + max(levels(root->left),levels(root->right));
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(8);
    Node* h = new Node(9);

    a->left = b; a->right = c;
    b->left = d; b->right = e;
    c->right = f;
    e->left = g; e->right = h;

    // cout<<a->val<<endl;
    // cout<<a->left->val<<endl;
    // cout<<a->right->val<<endl;
    // cout<<a->left->left->val<<endl;
    // cout<<a->left->right->val<<endl;
    // cout<<a->right->right->val<<endl;

    // printTree(a);
    // cout<<endl;
    // cout<<size(a)<<endl;
    // cout<<sumBT(a)<<endl;
    // cout<<productBT(a)<<endl;

    cout<<maxValueBT(a)<<endl;
    cout<<minValueBT(a)<<endl;
}