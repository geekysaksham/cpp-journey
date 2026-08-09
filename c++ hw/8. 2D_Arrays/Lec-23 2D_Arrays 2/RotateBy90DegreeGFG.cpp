class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        for(int i=0;i<n;i++){
            int j1 = 0, j2 = n-1;
            while(j1<j2) swap(mat[i][j1++],mat[i][j2--]);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++) swap(mat[i][j],mat[j][i]);
        }
    }
};
