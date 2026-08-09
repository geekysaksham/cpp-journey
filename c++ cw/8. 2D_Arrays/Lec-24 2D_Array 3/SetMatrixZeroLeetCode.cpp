class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> v;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    v.push_back(i);
                    v.push_back(j);
                }
            }
        }
        int size = v.size();
        int x=0,y=1;
        while(x<size){
            for(int i=0;i<m;i++){
                matrix[i][v[y]] = 0;
            }
            for(int j=0;j<n;j++){
                matrix[v[x]][j] = 0;
            }
            x+=2; y+=2;
        }
    }
};