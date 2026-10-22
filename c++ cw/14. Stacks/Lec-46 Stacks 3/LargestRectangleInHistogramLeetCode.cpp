class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int> v1(heights.size(),-1);
        vector<int> v2(heights.size(),heights.size());
        stack<int> st1;
        stack<int> st2;

        //for psi
        for(int i=0;i<heights.size();i++){
            while(st1.size()>0 && heights[st1.top()]>=heights[i]) st1.pop();
            if(st1.size()>0) v1[i] = st1.top();
            st1.push(i);
        }

        // for nsi
        for(int i=heights.size()-1;i>=0;i--){
            while(st2.size()>0 && heights[st2.top()]>=heights[i]) st2.pop();
            if(st2.size()>0) v2[i] = st2.top();
            st2.push(i);
        }

        //Making psi vector the widths of every bars total
        for(int i=0;i<heights.size();i++){
            v1[i] = v2[i]-v1[i]-1;
        }
        int maxArea = 0;
        //Making nsi vector the areas of every bars and storing maxArea
        for(int i=0;i<heights.size();i++){
            v2[i] = heights[i] * v1[i];
            if(v2[i] > maxArea) maxArea = v2[i];
        }
        return maxArea;
    }
};class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int> v1(heights.size(),-1);
        vector<int> v2(heights.size(),heights.size());
        stack<int> st1;
        stack<int> st2;

        //for psi
        for(int i=0;i<heights.size();i++){
            while(st1.size()>0 && heights[st1.top()]>=heights[i]) st1.pop();
            if(st1.size()>0) v1[i] = st1.top();
            st1.push(i);
        }

        // for nsi
        for(int i=heights.size()-1;i>=0;i--){
            while(st2.size()>0 && heights[st2.top()]>=heights[i]) st2.pop();
            if(st2.size()>0) v2[i] = st2.top();
            st2.push(i);
        }

        //Making psi vector the widths of every bars total
        for(int i=0;i<heights.size();i++){
            v1[i] = v2[i]-v1[i]-1;
        }
        int maxArea = 0;
        //Making nsi vector the areas of every bars and storing maxArea
        for(int i=0;i<heights.size();i++){
            v2[i] = heights[i] * v1[i];
            if(v2[i] > maxArea) maxArea = v2[i];
        }
        return maxArea;
    }
};