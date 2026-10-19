class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        vector<int> ans(heights.size(),0);
        stack<int> st;
        for(int i=heights.size()-1;i>=0;i--){
            int count = 0;
            //Popping Element => increasing count
            while(st.size()>0 && st.top()<heights[i]){
                count++;
                st.pop();
            }
            //If now stack size is greater than zero => increasing count
            if(st.size()>0) count++;
            ans[i] = count;
            st.push(heights[i]);
        }
        return ans;
    }
};