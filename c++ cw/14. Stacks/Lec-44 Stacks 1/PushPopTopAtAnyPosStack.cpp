#include<iostream>
#include<stack>
using namespace std;
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
void pushAtPos(stack<int>& st,int idx, int val){
    stack<int> helpSt;
    int len = st.size();
    int k = 0;
    if(idx == 0) helpSt.push(val);
    while(st.size() > 0){
        if(len-idx == k) helpSt.push(val);
        helpSt.push(st.top());
        st.pop();
        k++;
    }
    while(helpSt.size() > 0){
        st.push(helpSt.top());
        helpSt.pop();
    }
}
void popAtPos(stack<int>& st,int idx){
    int len = st.size();
    if(idx<0 || idx>=len){
        cout<<"Invalid Index!"<<endl;
        return;
    }
    if(len == 0){
        cout<<"Underflow"<<endl;
        return;
    }
    stack<int> helpSt;
    int k = 0;
    while(st.size() > 0){
        if(len-idx-1 != k) helpSt.push(st.top());
        st.pop();
        k++;
    }
    while(helpSt.size() > 0){
        st.push(helpSt.top());
        helpSt.pop();
    }
}
int get(stack<int> st, int idx){
    int len = st.size();
    if(idx<0 || idx>=len){
        cout<<"Invalid Index!"<<endl;
        return -1;
    }
    stack<int> helpSt;
    while(st.size() > 0){
        helpSt.push(st.top());
        st.pop();
    }
    int k = 0;
    int val = -1;
    while(helpSt.size()>0){
        if(k == idx) val = helpSt.top();
        st.push(helpSt.top());
        helpSt.pop();
        k++;
    }
    return val;
}
int main(){
    stack<int> st;
    st.push(18);
    st.push(33);
    st.push(1);
    st.push(45);
    st.push(7);

    printTopToBottom(st);
    // popAtPos(st,3);
    // cout<<get(st,3)<<endl;
    // printTopToBottom(st);
    pushAtPos(st,2,99);
    printTopToBottom(st);
}