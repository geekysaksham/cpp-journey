class Solution {
  public:
    vector<int> queueTraversal(queue<int>& q) {
        int n = q.size();
        vector<int> v(n);
        for(int i=0;i<n;i++){
            int ele = q.front();
            v[i] = ele;
            q.pop();
            q.push(ele);
        }
        return v;
    }
};