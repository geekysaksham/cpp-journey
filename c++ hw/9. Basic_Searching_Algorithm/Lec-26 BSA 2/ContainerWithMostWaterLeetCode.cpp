class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i=0, j=n-1;
        int width = n-1;
        int maxArea = INT_MIN;
        while(i<j){
            int minHeight = min(height[i],height[j]);
            if(minHeight*width > maxArea){
                maxArea = minHeight*width;
            }
            if(height[i]<height[j]) i++;
            else j--;
            width -= 1;
        }
        return maxArea;
    }
};