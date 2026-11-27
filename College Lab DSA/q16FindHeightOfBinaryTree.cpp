#include <iostream>
#include<algorithm>
using namespace std;
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int data) : val(data), left(NULL), right(NULL) {}
};
int height(Node* root) {
    if (root == NULL) return 0;
    int l = height(root->left);
    int r = height(root->right);
    return 1 + max(l,r);
}
int main() {
    // Creating Nodes
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    // Connecting nodes for binary tree
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    cout << "\nHeight of Binary Tree: " << height(a)<<endl;
    return 0;
}