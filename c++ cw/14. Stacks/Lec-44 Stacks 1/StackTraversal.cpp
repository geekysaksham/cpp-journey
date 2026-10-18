#include<iostream>
#include<stack>
using namespace std;
void printBottomToTop(stack<int>& st){
    stack<int> helpSt;
    while(st.size() > 0){
        helpSt.push(st.top());
        st.pop();
    }
    //push back elements from helper to stack while printing
    while(helpSt.size() > 0){
        cout<<helpSt.top()<<" ";
        st.push(helpSt.top());
        helpSt.pop();
    }
    cout<<endl;
}
void printTopToBottom(stack<int>& st){
    stack<int> helpSt;
    while(st.size() > 0){
        cout<<st.top()<<" ";
        helpSt.push(st.top());
        st.pop();
    }

    //push back elements from helper to stack
    while(helpSt.size() > 0){
        st.push(helpSt.top());
        helpSt.pop();
    }
    cout<<endl;
}
int main(){
    stack<int> st;
    st.push(18);
    st.push(33);
    st.push(1);
    st.push(45);
    st.push(7);

    printTopToBottom(st);
    printBottomToTop(st);
}