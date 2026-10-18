class Solution {
public:
    bool isValid(string s) {
        if(s.size() %2 != 0) return false;
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i] == '[' || s[i] == '(' || s[i] == '{'){
                st.push(s[i]);
            }
            else{
                if(st.size() == 0) return false;
                if(s[i] == ']'){
                    if(st.top() != '[') return false;
                }
                else if(s[i] == '}'){
                    if(st.top() != '{') return false;
                }
                else{
                    if(st.top() != '(') return false;
                }
                st.pop();
            }
        }
        if(st.size()==0) return true;
        return false;
    }
};