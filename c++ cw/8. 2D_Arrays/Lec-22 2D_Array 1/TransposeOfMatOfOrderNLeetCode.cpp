class Solution {
  public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
        int r = mat.size(), c = mat[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<i;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        return mat;
    }
};