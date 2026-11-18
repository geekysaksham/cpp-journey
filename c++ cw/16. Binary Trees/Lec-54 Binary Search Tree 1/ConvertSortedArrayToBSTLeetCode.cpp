class Solution {
public:
    TreeNode* convert(vector<int>& nums, int lo, int hi){
        if(lo>hi) return NULL;
        int mid = lo + (hi-lo)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = convert(nums,lo,mid-1);
        root->right = convert(nums,mid+1,hi);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        return convert(nums,0,n-1);
    }
};