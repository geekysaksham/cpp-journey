//Method 2
class Solution {
public:
    void dfs(TreeNode* root, int& ans, int& k){
        if(root == NULL) return;
        dfs(root->left,ans,k);
        k--;
        if(k==0) ans = root->val;
        dfs(root->right,ans,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans = 0;
        dfs(root,ans,k);
        return ans;
    }
};
//Method 1
// class Solution {
// public:
//     void kSmallest(TreeNode* root, vector<int>& v, int k){
//         if(root == NULL) return;
//         kSmallest(root->left,v,k);
//         v.push_back(root->val);
//         kSmallest(root->right,v,k);
//     }
//     int kthSmallest(TreeNode* root, int k) {
//         vector<int> v;
//         kSmallest(root,v,k);
//         return v[k-1];
//     }
// };