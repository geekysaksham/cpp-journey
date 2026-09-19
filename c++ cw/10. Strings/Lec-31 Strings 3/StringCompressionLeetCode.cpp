class Solution {
public:
    int compress(vector<char>& chars) {
        string ans = "";
        int i=0, j=0;
        int n = chars.size();
        char ch;
        while(j<n){
            ch = chars[i];
            if(chars[j]==ch) j++;
            else{
                int len = j-i;
                ans.push_back(ch);
                if(len>1) ans += to_string(len);
                i=j;
            }
        }
        int len = j-i;
        ans.push_back(ch);
        if(len>1) ans += to_string(len);

        vector<char> ans2(ans.size());
        for(int i=0;i<ans.size();i++){
            ans2[i] = ans[i];
        }
        chars = ans2;
        return chars.size();
    }
};