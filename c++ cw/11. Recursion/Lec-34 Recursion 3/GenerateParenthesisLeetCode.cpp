class Solution {
public:
    void parenthesis(int op, int cl, string str,vector<string>& ans,int n){
        if(cl == n){
            ans.push_back(str);
            return;
        }
        if(op<n) parenthesis(op+1, cl,str+"(" , ans,n);
        if(cl<op && cl<n) parenthesis(op,cl+1,str+")",ans,n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        parenthesis(0,0,"",ans,n);
        return ans;
    }
};