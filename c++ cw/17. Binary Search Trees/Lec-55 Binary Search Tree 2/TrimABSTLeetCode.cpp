class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if(root == NULL) return root;
        if(root->val >= low && root->val <= high){
            root->left = trimBST(root->left,low,high);
            root->right = trimBST(root->right,low,high);
        }
        else if(root->val < low) root = trimBST(root->right,low,high);
        else root = trimBST(root->left,low,high);
        return root;
    }
};