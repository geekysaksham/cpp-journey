class Solution {
public:
    void paths(TreeNode* root, string str, vector<string>& ans){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL){
            str += to_string(root->val);
            ans.push_back(str);
            return;
        }
        paths(root->left,str+to_string(root->val)+"->",ans);
        paths(root->right,str+to_string(root->val)+"->",ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        paths(root,"",ans);
        return ans;
    }
};