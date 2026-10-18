#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10); // push -> add at top
    st.push(20);
    st.push(30);
    st.pop(); // pop -> remove from top
    st.pop();
    st.push(40);
    cout<<st.size()<<endl;
    cout<<st.top()<<endl; // top -> get the top
}