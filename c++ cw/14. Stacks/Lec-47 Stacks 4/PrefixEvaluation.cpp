class Solution {
  public:
    int Operation(int x, int y, string op){
        if(op == "+") return x + y;
        else if(op == "-") return x - y;
        else if(op == "*") return x * y;
        else if(op == "/") return floor((double)x / y);
        else return pow(x,y);
     }
    int evaluatePrefix(vector<string>& arr) {
        int n = arr.size();
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            if(arr[i] == "+" || arr[i] == "-" || arr[i] == "*" || arr[i] == "/" || arr[i] == "^"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(Operation(a,b,arr[i]));
            }
            else st.push(stoi(arr[i]));
        }
        return st.top();
    }
};