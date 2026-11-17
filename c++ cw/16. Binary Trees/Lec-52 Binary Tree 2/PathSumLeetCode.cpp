class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL) return false;
        if(root->left == NULL && root->right == NULL && targetSum == root->val) return true;
        targetSum -= root->val;
        return hasPathSum(root->left,targetSum) || hasPathSum(root->right,targetSum);
    }
};