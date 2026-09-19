class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        vector<int> v(26,0);
        for(int i=0;i<s.size();i++){
            v[(s[i]-97)]++;
        }
        int max = v[0];
        char ch = 'a';
        for(int i=1;i<26;i++){
            if(v[i]>max){
                max = v[i];
                ch = (char)(i+97);
            }
        }
        return ch;
    }
};