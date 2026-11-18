class Solution {
  public:
    class Quad{
    public:
        long long mx;
        long long mn;
        bool isBST;
        int size;
    };
    int maxSize;
    Quad solve(Node* root){
        if(root == NULL) return {LLONG_MIN,LLONG_MAX,true,0};
        Quad left = solve(root->left);
        Quad right = solve(root->right);
        long long val = root->data;
        long long mx = max(val,max(left.mx,right.mx));
        long long mn = min(val,min(left.mn,right.mn));
        bool isBST = (val > left.mx && val < right.mn && left.isBST && right.isBST);
        int size = 1 + left.size + right.size;
        if(isBST) maxSize = max(maxSize,size);
        return {mx,mn,isBST,size};
    }
    int largestBst(Node *root) {
        maxSize = 1;
        solve(root);
        return maxSize;
    }
};