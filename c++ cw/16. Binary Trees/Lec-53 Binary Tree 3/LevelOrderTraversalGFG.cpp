//Method 2
class Solution {
  public:
    vector<int> levelOrder(Node *root) {
        vector<int> ans;
        queue<Node*> q;
        if(root != NULL) q.push(root);
        while(q.size() > 0){
            Node* front = q.front();
            q.pop();
            ans.push_back(front->data);
            if(front->left != NULL) q.push(front->left);
            if(front->right != NULL) q.push(front->right);
        }
        return ans;
    }
};


//Method 1
// class Solution {
//   public:
//     int levels(Node* root){
//         if(root == NULL) return 0;
//         int leftLevel = levels(root->left);
//         int rightLevel = levels(root->right);
//         return 1 + max(leftLevel, rightLevel);
//     }
//     void lvlTraverse(Node* root, vector<int>& ans, int currLevel, int k){
//         if(root == NULL) return;
//         if(currLevel == k){
//             ans.push_back(root->data);
//             return;
//         }
//         lvlTraverse(root->left, ans, currLevel+1, k);
//         lvlTraverse(root->right, ans, currLevel+1, k);
//     }
//     vector<int> levelOrder(Node *root) {
//         vector<int> ans;
//         int totalLevel = levels(root);
//         for(int i=0;i<totalLevel;i++){
//             lvlTraverse(root,ans,0,i);
//         }
//         return ans;
//     }
// };