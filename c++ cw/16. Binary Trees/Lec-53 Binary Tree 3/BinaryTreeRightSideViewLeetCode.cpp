class Solution {
public:
    void dfs(TreeNode* root,vector<int>& ans, int currLevel){
        if(root == NULL) return;
        ans[currLevel] = root->val;
        if(root->left != NULL) dfs(root->left,ans,currLevel+1);
        if(root->right != NULL) dfs(root->right,ans,currLevel+1);
    }
    int level(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + max(level(root->left),level(root->right));
    }
    vector<int> rightSideView(TreeNode* root) {
        if(root == NULL) return {};
        vector<int> ans(level(root));
        dfs(root,ans,0);
        return ans;
    }
};