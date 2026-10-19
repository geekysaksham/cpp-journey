class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        //Method 2
        vector<int> ans(arr.size(),-1);
        stack<int> st;
        for(int i=0;i<arr.size();i++){
            while(st.size()>0 && arr[st.top()]<=arr[i]){
                st.pop();
            }
            if(st.size()>0) ans[i] = st.top();
            st.push(i);
        }
        for(int i=0;i<arr.size();i++){
            ans[i] = i - ans[i];
        }
        return ans;
        
        
        
        
        //Method 1 
        // vector<int> ans(arr.size(),1);
        // stack<int> st;
        // for(int i=0;i<arr.size();i++){
        //     stack<int> helpSt;
        //     //Popping smaller or equal element and adding to helperStack
        //     while(st.size()>0 && st.top()<=arr[i]){
        //         ans[i]++;
        //         helpSt.push(st.top());
        //         st.pop();
        //     }
        //     //Adding element back to Original stack from helperStack
        //     while(helpSt.size()>0){
        //         st.push(helpSt.top());
        //         helpSt.pop();
        //     }
        //     //Pushing ith element
        //     st.push(arr[i]);
        // }
        // return ans;
    }
};