class Solution {
public:
    int maxi;
    int levels(TreeNode* root){
        if(root == NULL) return 0;
        int leftLevels = levels(root->left);
        int rightLevels = levels(root->right);
        if(maxi < (leftLevels + rightLevels)) maxi = leftLevels + rightLevels;
        return 1 + max(leftLevels,rightLevels);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        maxi = 0;
        levels(root);
        return maxi;
    }
};