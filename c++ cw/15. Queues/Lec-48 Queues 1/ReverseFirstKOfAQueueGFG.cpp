class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        int n = q.size();
        if(n==1) return q;
        if(k>n) return q;
        stack<int> st;
        for(int i=1;i<=k;i++){
            st.push(q.front());
            q.pop();
        }
        while(st.size() > 0){
            q.push(st.top());
            st.pop();
        }
        for(int i=1; i<=(q.size()-k); i++){
            q.push(q.front());
            q.pop();
        }
        return q;
    }
};