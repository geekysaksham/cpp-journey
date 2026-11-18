//Method 2
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL) return new TreeNode(val);
        if(root->val > val) root->left = insertIntoBST(root->left,val);
        else root->right = insertIntoBST(root->right,val);
        return root;
    }
};

//Method 1
// class Solution {
// public:
//     void insertion(TreeNode* root, TreeNode* newNode){
//         if(root->val > newNode->val && root->left == NULL) root->left = newNode;
//         else if(root->val > newNode->val && root->left != NULL) insertion(root->left,newNode);
//         else if(root->val < newNode->val && root->right == NULL) root->right = newNode;
//         else insertion(root->right,newNode);
//     }
//     TreeNode* insertIntoBST(TreeNode* root, int val) {
//         TreeNode* newNode = new TreeNode(val);
//         if(root == NULL) return newNode;
//         insertion(root,newNode);
//         return root;
//     }
// };