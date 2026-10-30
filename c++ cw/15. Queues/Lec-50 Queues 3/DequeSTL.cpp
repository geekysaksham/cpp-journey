#include<iostream>
#include<deque>
using namespace std;
void display(deque<int>& dq){
    int dqSize = dq.size();
    for(int i=1;i<=dqSize;i++){
        cout<<dq.front()<<" ";
        dq.push_back(dq.front());
        dq.pop_front();
    }
    cout<<endl;
}
int main(){
    deque<int> dq;
    dq.push_back(10); // deque mei push
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_front(50); // 50 10 20 30 40
    display(dq); 
}