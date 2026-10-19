class Solution {
  public:
    vector<int> preGreaterEle(vector<int>& arr) {
        vector<int> ans(arr.size(),-1);
        stack<int> st;
        for(int i=0;i<arr.size();i++){
            while(st.size()>0 && st.top()<=arr[i]) st.pop();
            if(st.size()>0) ans[i]=st.top();
            st.push(arr[i]);
        }
        return ans;
    }
};