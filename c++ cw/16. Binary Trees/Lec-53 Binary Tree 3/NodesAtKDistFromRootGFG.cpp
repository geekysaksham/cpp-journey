class Solution {
  public:
    void kdist(Node* root, int k, vector<int>& ans, int currLevel){
        if(root==NULL) return;
        if(k==currLevel){
            ans.push_back(root->data);
            return;
        }
        kdist(root->left,k,ans,currLevel+1);
        kdist(root->right,k,ans,currLevel+1);
    }
    vector<int> kdistance(Node *root, int k) {
        vector<int> ans;
        kdist(root,k,ans,0);
        return ans;
    }
};