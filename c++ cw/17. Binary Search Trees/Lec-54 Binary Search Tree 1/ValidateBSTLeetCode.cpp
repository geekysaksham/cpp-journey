class Solution {
public:
    void dfs(TreeNode* root,bool& flag, long long& prevValue){
        if(root == NULL || flag == false) return;
        dfs(root->left,flag,prevValue);
        if(prevValue >= root->val) flag = false;
        prevValue = root->val;
        dfs(root->right,flag,prevValue);
    }
    bool isValidBST(TreeNode* root) {
        bool flag = true;
        long long prevValue = LLONG_MIN;
        dfs(root,flag,prevValue);
        return flag;
    }
};
//Method 1
// class Solution {
// public:
//     void dfs(TreeNode* root, vector<int>& ans){
//         if(root == NULL) return;
//         dfs(root->left,ans);
//         ans.push_back(root->val);
//         dfs(root->right,ans);
//     }
//     bool isValidBST(TreeNode* root) {
//         vector<int> ans;
//         dfs(root,ans);
//         bool flag = true;
//         for(int i=0;i<ans.size()-1;i++){
//             if(ans[i] >= ans[i+1]) flag = false;
//         }
//         return flag;
//     }
// };