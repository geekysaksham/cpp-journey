class Solution {
  public:
    vector<int> commonElements(vector<int> &a, vector<int> &b) {
        int n1 = a.size();
        int n2 = b.size();
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i1 = 0, i2 = 0;
        vector<int> ans;
        while(i1<n1 && i2<n2){
            if(b[i2]<a[i1]) i2++;
            else if(b[i2]>a[i1]) i1++;
            else{
                ans.push_back(b[i2]);
                i2++;
                i1++;
            }
        }
        return ans;
    }
};