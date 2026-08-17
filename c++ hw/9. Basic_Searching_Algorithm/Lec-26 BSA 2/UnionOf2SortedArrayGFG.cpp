class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int n1 = a.size(), n2 = b.size();
        vector<int> ans;
        int i=0, j=0;
        while(i<n1 && j<n2){
            if(a[i]<b[j]){
                if(i>0 && a[i]==a[i-1]){
                    i++;
                    continue;
                }
                ans.push_back(a[i]);
                i++;
            }
            else if(b[j]<a[i]){
                if(j>0 && b[j]==b[j-1]){
                    j++;
                    continue;
                }
                ans.push_back(b[j]);
                j++;
            }
            else{
                if(ans.empty() || ans.back()!=a[i]) ans.push_back(b[j]);
                i++;
                j++;
            }
        }
        while(i<n1){
            if(a[i-1]!=a[i]){
                ans.push_back(a[i]);
            }
            i++;
        }
        while(j<n2){
            if(b[j-1]!=b[j]){
                ans.push_back(b[j]);
            }
            j++;
        }
        return ans;
    }
};