//Method 2
class Solution {
public:
    bool ans;
    int level(TreeNode* root){
        if(root == NULL) return 0;
        int leftLevel = level(root->left);
        int rightLevel = level(root->right);
        if(abs(leftLevel - rightLevel) > 1) ans = false;
        return 1 + max(leftLevel,rightLevel);
    }
    bool isBalanced(TreeNode* root) {
        ans = true;
        level(root);
        return ans;
    }
};

//Method 1
// class Solution {
// public:
//     int level(TreeNode* root){
//         if(root == NULL) return 0;
//         return 1 + max(level(root->left),level(root->right));
//     }
//     bool isBalanced(TreeNode* root) {
//         if(root == NULL) return true;
//         if(abs(level(root->left)-level(root->right)) > 1) return false;
//         return isBalanced(root->left) && isBalanced(root->right);
//     }
// };