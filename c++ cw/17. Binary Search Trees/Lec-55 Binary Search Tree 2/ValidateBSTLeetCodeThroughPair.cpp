//Method 3
class Solution {
public:
    class Triplet{
    public:
        long long mx;
        long long mn;
        bool isBST;
    };
    Triplet solve(TreeNode* root){
        if(root == NULL) return {LLONG_MIN,LLONG_MAX,true};
        Triplet left = solve(root->left);
        Triplet right = solve(root->right);
        long long val = root->val;
        long long mx = max(val,max(left.mx,right.mx));
        long long mn = min(val,min(left.mn,right.mn));
        bool isBST = (val > left.mx && val < right.mn && left.isBST && right.isBST);
        return {mx,mn,isBST};
    }
    bool isValidBST(TreeNode* root) {
        return solve(root).isBST;
    }
};