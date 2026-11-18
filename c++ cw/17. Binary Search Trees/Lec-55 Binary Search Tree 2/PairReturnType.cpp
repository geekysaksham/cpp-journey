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
class Pair{
public:
    int size;
    int sum;
    Pair(int size, int sum){
        this->size = size;
        this->sum = sum;
    }
};

class Penta{
public:
    int size;
    int sum;
    int mx;
    int mn;
    int levels;
    Penta(int size, int sum, int mx, int mn, int levels){
        this->size = size;
        this->sum = sum;
        this->mx = mx;
        this->mn = mn;
        this->levels = levels;
    }
};

Pair sizeSum(Node* root){
    if(root == NULL) return {0,0};
    Pair left = sizeSum(root->left);
    Pair right = sizeSum(root->right);
    int size = 1 + left.size + right.size;
    int sum = root->val + left.sum + right.sum;
    return {size,sum};
}

pair<int,int> maxMin(Node* root){
    if(root == NULL) return {INT_MIN,INT_MAX};
    pair<int,int> left = maxMin(root->left);
    pair<int,int> right = maxMin(root->right);
    int mx = max(root->val, max(left.first,right.first));
    int mn = min(root->val, min(left.second,right.second));
    return {mx,mn};
}

Penta sizeSumMaxMinLevels(Node* root){
    if(root == NULL) return {0,0,INT_MIN,INT_MAX,0};
    Penta left = sizeSumMaxMinLevels(root->left);
    Penta right = sizeSumMaxMinLevels(root->right);
    int size = 1 + left.size + right.size;
    int sum = root->val + left.sum + right.sum;
    int mx = max(root->val,max(left.mx,right.mx));
    int mn = min(root->val,min(left.mn,right.mn));
    int levels = 1 + max(left.levels, right.levels);
    return {size,sum,mx,mn,levels};
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

    // Pair p = sizeSum(a);
    // cout<<p.size<<" "<<p.sum<<endl;

    // pair<int,int> p = maxMin(a);
    // cout<<p.first<<" "<<p.second<<endl;

    Penta p = sizeSumMaxMinLevels(a);
    cout<<p.size<<" "<<p.sum<<" "<<p.mx<<" "<<p.mn<<" "<<p.levels<<endl;
}