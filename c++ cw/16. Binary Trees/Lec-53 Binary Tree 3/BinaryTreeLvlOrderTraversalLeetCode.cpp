class Solution {
public:
    class Pair{
    public:
        TreeNode* Node;
        int level;
        Pair(TreeNode* Node, int level){
            this->Node = Node;
            this->level = level;
        }
    };
    int level(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + max(level(root->left),level(root->right));
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL) return {};
        int levels = level(root);
        vector<vector<int>> ans(levels,vector<int>(0));
        queue<Pair> q;
        q.push(Pair(root,0));
        while(q.size() > 0){
            Pair p = q.front();
            q.pop();
            ans[p.level].push_back(p.Node->val);
            if(p.Node->left != NULL) q.push(Pair(p.Node->left,p.level+1));
            if(p.Node->right != NULL) q.push(Pair(p.Node->right,p.level+1));
        } 
        return ans;
    }
};