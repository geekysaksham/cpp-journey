class Solution {
  public:
    char nonRepeatingChar(string &s) {
        vector<int> v(26,0);
        for(int i=0;i<s.size();i++){
            v[(s[i]-97)]++;
        }
        for(int i=0;i<s.size();i++){
            if(v[s[i]-97] == 1) return s[i];
        }
        return '$';
    }
};