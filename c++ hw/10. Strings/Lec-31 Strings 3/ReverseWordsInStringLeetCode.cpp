class Solution {
public:
    string rev(string str){
    int i=0;
    int j=str.length()-1;
    while(i<j){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return str;
}
    string reverseWords(string s) {
        string ans;
        int i=0, j=0;
        int n = s.size();
        int len;
        if(s.length()==1) return s;
        while(j<n){
            if(s[j]!=' ') j++;
            else if(j==0 && s[j]==' '){
                i++;
                j++;
            }
            else if(j!=0 && s[j-1]==' '){
                i++;
                j++;
            }
            else{
                len = j-i;
                ans += rev(s.substr(i,len));
                ans += " ";
                i=j+1;
                j=i;
            }
        }
        len = j-i;
        if(s.length()>1 && s[j-1]!=' ') ans += rev(s.substr(i,len));
        if(!ans.empty() && s[j-1]==' ') ans.pop_back();
        reverse(ans.begin(),ans.end());
        return ans;
    }
};