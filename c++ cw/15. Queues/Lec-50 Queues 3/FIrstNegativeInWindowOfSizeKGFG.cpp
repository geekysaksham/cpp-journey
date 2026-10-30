class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        int n = arr.size();
        queue<int> q;
        for(int i=0;i<arr.size();i++){
            if(arr[i] < 0) q.push(i);
        }
        vector<int> ans(n-k+1,0);
        for(int i=0;i<n-k+1;i++){
            while(q.size() > 0 && q.front() < i) q.pop();
            if(q.size() > 0 && q.front() < i+k) ans[i] = arr[q.front()];
        }
        return ans;
    }
};