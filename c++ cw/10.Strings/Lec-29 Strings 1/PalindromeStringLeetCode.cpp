class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0;i<s.length();i++){
            if(s[i] >= 65 && s[i] <= 90) s[i] += 32;
        }
        int i = 0, j = s.length() - 1;
        while(i<j){
            if(s[i]<48 || s[i]>122 || (s[i]>57 && s[i]<97)) i++;
            else if(s[j]<48 || s[j]>122 || (s[j]>57 && s[j]<97)) j--;
            else if(s[i]!=s[j]) return false;
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};