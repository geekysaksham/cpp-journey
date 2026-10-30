class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        stack<int> st;
        int n = q.size();
        // pushing n/2 elements in stack
        for(int i=1;i<=n/2;i++){
            st.push(q.front());
            q.pop();
        }
        //popping n/2 elements from stack
        while(st.size() > 0){
            q.push(st.top());
            st.pop();
        }
        // pushing n/2 elements in stack
        for(int i=1;i<=n/2;i++){
            st.push(q.front());
            q.pop();
        }
        //alternatively pushing ele from stack and q and popping them till n/2
        for(int i=1;i<=n/2;i++){
            q.push(st.top());
            st.pop();
            q.push(q.front());
            q.pop();
        }
        //reversing the queue with the help of stack
        for(int i=0;i<n;i++){
            st.push(q.front());
            q.pop();
        }
        while(st.size() > 0){
            q.push(st.top());
            st.pop();
        }
    }
};