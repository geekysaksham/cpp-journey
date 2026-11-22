//Method 3
//From Moris Traversal
class Solution {
public:
    void flatten(TreeNode* root) {
        TreeNode* curr = root;
        while(curr){
            if(curr->left){
                TreeNode* p = curr->left;
                while(p->right) p = p->right;
                p->right = curr->right;
                curr->right = curr->left;
                curr->left = NULL;
            }
            else{
                curr = curr->right;
            }
        }
    }
};