class Solution {
  public:
    int evaluatePostfix(vector<string>& arr) {
        int i = 0;
        stack<int> st;
        while(i<arr.size()){
            if(arr[i] == "+" ||  arr[i] == "-" || arr[i] == "*" || arr[i] == "/" || arr[i] == "^"){
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                if(arr[i] == "+") st.push(a+b);
                else if(arr[i] == "-") st.push(a-b);
                else if(arr[i] == "*") st.push(a*b);
                else if(arr[i] == "/") st.push(floor((double)a / b));
                else st.push(pow(a,b));
            }
            else{
                st.push(stoi(arr[i]));
            }
            i++;
        }
        return st.top();
    }
};