class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> ans;
        int i1=0,j1=0;
        int count1 = 0, count2 = 0;
        while(i1<n1){
            if(j1>=n2) break;
            if(nums1[i1]==nums2[j1]){
                count1++;
                i1++;
            }
            else if(nums1[i1]<nums2[j1]) i1++;
            else j1++;
        }
        ans.push_back(count1);
        int i2=0, j2=0;
        while(j2<n2){
            if(i2>=n1) break;
            if(nums2[j2]==nums1[i2]){
                count2++;
                j2++;
            }
            else if(nums2[j2]<nums1[i2]) j2++;
            else i2++;
        }
        ans.push_back(count2);
        return ans;
    }
};
