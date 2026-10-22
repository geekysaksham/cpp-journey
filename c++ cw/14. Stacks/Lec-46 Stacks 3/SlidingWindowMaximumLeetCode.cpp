class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> v1(n,-1);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(st.size()>0 && nums[st.top()]<=nums[i]) st.pop();
            if(st.size()>0) v1[i] = st.top();
            st.push(i);
        }
        vector<int> ans(n-k+1);
        int j = 0;
        for(int i=0;i<n-k+1;i++){
            if(j<i) j = i;
            while(j<i+k){
                if(v1[j] != -1 && v1[j]<i+k) j = v1[j];
                else break;
            }
            ans[i] = nums[j];
        }
        return ans;
    }
};