class Solution {
  public:
    void subsetArr(int idx, vector<int>& v, int ans, vector<int>& finalAns){
        if(idx == v.size()){
            finalAns.push_back(ans);
            return;
        }
        subsetArr(idx+1,v,ans,finalAns);
        ans += v[idx];
        subsetArr(idx+1,v,ans,finalAns);
    }
    vector<int> subsetSums(vector<int>& arr) {
        vector<int> finalAns;
        vector<int> ans;
        subsetArr(0,arr,0,finalAns);
        return finalAns; 
    }
};