//From Moris Traversal
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode* curr = root;
        while(curr != NULL){
            if(curr->left != NULL){
                TreeNode* p = curr->left;
                while(p->right != NULL && p->right != curr) p = p->right;
                if(p->right == NULL){
                    p->right = curr;
                    curr = curr->left;
                }
                else{
                    p->right = NULL;
                    ans.push_back(curr->val);
                    curr = curr->right;
                }
            }
            else{
                ans.push_back(curr->val);
                curr = curr->right;
            }
        }
        return ans;
    }
};