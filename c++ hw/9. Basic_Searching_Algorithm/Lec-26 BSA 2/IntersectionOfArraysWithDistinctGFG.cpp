class Solution {
  public:
    int intersectSize(vector<int> &a, vector<int> &b) {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int count = 0;
        int n1 = a.size(), n2 = b.size();
        int i=0, j=0;
        while(i<n1 && j<n2){
            if(a[i]<b[j]) i++;
            else if(b[j]<a[i]) j++;
            else{
                count+=1;
                i++;
                j++;
            }
        }
        return count;
    }
};