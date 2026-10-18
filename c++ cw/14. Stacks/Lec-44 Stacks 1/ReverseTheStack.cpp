#include<iostream>
#include<stack>
using namespace std;
void reverseStack(stack<int>& st){
    if(st.size() == 0){
        cout<<"No Stack!"<<endl;
        return;
    }
    if(st.size() == 1) return;
    stack<int> helpSt1;
    // stack<int> helpSt2;
    while(st.size() > 0){
        helpSt1.push(st.top());
        st.pop();
    }
    // while(helpSt1.size() > 0){
    //     helpSt2.push(helpSt1.top());
    //     helpSt1.pop();
    // }
    // while(helpSt2.size() > 0){
    //     st.push(helpSt2.top());
    //     helpSt2.pop();
    // }
    st = helpSt1;
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
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    printTopToBottom(st);
    reverseStack(st);
    printTopToBottom(st);
}