class Solution {
public:
    void subsetArr(int idx, vector<int>& v, vector<int> ans, vector<vector<int>>& finalAns){
        if(idx == v.size()){
            finalAns.push_back(ans);
            return;
        }
        subsetArr(idx+1,v,ans,finalAns);
        ans.push_back(v[idx]);
        subsetArr(idx+1,v,ans,finalAns);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> finalAns;
        vector<int> ans;
        subsetArr(0,nums,ans,finalAns);
        return finalAns; 
    }
};