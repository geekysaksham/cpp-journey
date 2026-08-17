class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        //First Occurence
        int low = 0, high = n-1;
        int idx = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                idx = mid;
                high  = mid-1;
            }
            else if(nums[mid]<target) low = mid+1;
            else high = mid-1;
        }
        ans.push_back(idx);
        //Second Occurence
        low = 0, high = n-1;
        idx = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                idx = mid;
                low = mid+1;
            }
            else if(nums[mid]<target) low = mid+1;
            else high = mid-1;
        }
        ans.push_back(idx);
        return ans;
    }
};