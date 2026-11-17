//Method 2
class Solution {
public:
    bool areInverts(TreeNode* p, TreeNode* q){
        if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL) return false;
        if(p->val != q->val) return false;
        return areInverts(p->left,q->right) && areInverts(p->right,q->left);
    }
    bool isSymmetric(TreeNode* root) {
        return areInverts(root->left,root->right);
    }
};

//Method 1
// class Solution {
// public:
//         void invertTree(TreeNode* root){
//         if(root == NULL) return;
//         TreeNode* temp = root->left;
//         root->left = root->right;
//         root->right = temp;
//         invertTree(root->left);
//         invertTree(root->right);
//     }
//     bool sameTree(TreeNode* p, TreeNode* q){
//         if(p==NULL && q==NULL) return true;
//         if(p==NULL || q==NULL) return false;
//         if(p->val != q->val) return false;
//         return sameTree(p->left,q->left) && sameTree(p->right,q->right);
//     }
//     bool isSymmetric(TreeNode* root) {
//         if(root == NULL) return true;
//         invertTree(root->right);
//         return sameTree(root->left,root->right);
//     }
// };