class Solution {
  public:
    string postToInfix(string &s) {
        int i=0;
        stack<string> st;
        while(i<s.size()){
            if(s[i] == '+' ||  s[i] == '-' || s[i] == '*' || 
            s[i] == '/' || s[i] == '%' || s[i] == '^'){
                string b = st.top();
                st.pop();
                string a = st.top();
                st.pop();
                st.push("("+a+s[i]+b+")");
            }
            else{
                string str = "";
                str += s[i];
                st.push(str);
            }
            i++;
        }
        return st.top();
    }
};