class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos=-1, neg=-1;
        int n = nums.size();
        int low = 0, high = n-1;
        int mid;
        while(low<=high){
            mid = (low+high)/2;
            if(nums[mid]<0){
                neg = mid;
                low = mid+1;
            }
            else high = mid-1;
        }
        if(neg!=-1) neg +=1;
        else neg = 0;
        low = 0, high = n-1;
        while(low<=high){
            mid = (low+high)/2;
            if(nums[mid]>0){
                pos = mid;
                high = mid - 1;
            }
            else low = mid+1;
        }
        if(pos!=-1) pos = n - pos;
        else pos = 0;
        return max(pos,neg);
    }
};