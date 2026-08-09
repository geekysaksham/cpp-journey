class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int minr = 0, maxr = matrix.size()-1, minc = 0, maxc = matrix[0].size()-1;
        while(minc<=maxc && minr<=maxr){
            for(int j=minc;j<=maxc;j++){
                ans.push_back(matrix[minr][j]);
            }
            minr++;
            if(minc>maxc || minr>maxr) break;
            for(int i=minr;i<=maxr;i++){
                ans.push_back(matrix[i][maxc]);
            }
            maxc--;
            if(minc>maxc || minr>maxr) break;
            for(int j=maxc;j>=minc;j--){
                ans.push_back(matrix[maxr][j]);
            }
            maxr--;
            if(minc>maxc || minr>maxr) break;
            for(int i=maxr;i>=minr;i--){
                ans.push_back(matrix[i][minc]);
            }
            minc++;
        }
        return ans;
    }
};