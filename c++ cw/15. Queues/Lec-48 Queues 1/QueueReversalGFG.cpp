class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        if(q.size() == 1) return;
        int n = q.size();
        stack<int> st;
        for(int i=0;i<n;i++){
            st.push(q.front());
            q.pop();
        }
        for(int i=0;i<n;i++){
            q.push(st.top());
            st.pop();
        }
    }
};