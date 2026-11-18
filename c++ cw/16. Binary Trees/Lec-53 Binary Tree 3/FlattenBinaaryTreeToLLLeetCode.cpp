//Method 2
class Solution {
public:
    void flatten(TreeNode* root) {
        if(root == NULL) return;
        flatten(root->left);
        flatten(root->right);
        TreeNode* left = root->left;
        TreeNode* right = root->right;
        if(left != NULL) root->right = left;
        else root->right = right;
        root->left = NULL;
        TreeNode* temp = left;
        if(temp != NULL) while(temp->right != NULL) temp = temp->right;
        if(temp != NULL) temp->right = right;
    }
};

// Method 1
// class Solution {
// public:
//     void dfs(TreeNode* root, vector<TreeNode*>& ans){
//         if(root == NULL) return;
//         ans.push_back(root);
//         if(root->left != NULL) dfs(root->left,ans);
//         if(root->right != NULL) dfs(root->right,ans);
//     }
//     void flatten(TreeNode* root) {
//         if(root == NULL) return;
//         vector<TreeNode*> ans;
//         dfs(root,ans);
//         int n = ans.size();
//         for(int i=0;i<n;i++){
//             if(i != n-1) ans[i]->right = ans[i+1];
//             ans[i]->left = NULL;
//         }
//         ans[n-1]->right = NULL;
//     }
// };