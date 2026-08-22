class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n==1 || (nums[0] != nums[1])) return nums[0];
        if(nums[n-1] != nums[n-2]) return nums[n-1];
        int low = 0;
        int high = n-1;
        int mid;
        while(low <= high){
            mid = low + (high-low)/2;
            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]) return nums[mid];
            int f = mid, s = mid;
            if(nums[mid]==nums[mid-1]) f = mid - 1;
            else s = mid + 1;
            if((f-low)%2!=0) high = f - 1;
            else low = s + 1;
        }
        return 0;
    }
};