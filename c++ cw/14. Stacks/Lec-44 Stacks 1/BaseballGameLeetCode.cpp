class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(int i=0;i<operations.size();i++){
            if(operations[i][0] == 'D'){
                int doub = st.top() * 2;
                st.push(doub);
            }
            else if(operations[i][0] == '+'){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.push(a);
                st.push(a+b);
            }
            else if(operations[i][0] == 'C') st.pop();
            else st.push(stoi(operations[i]));
        }
        int sum = 0;
        while(st.size()>0){
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};