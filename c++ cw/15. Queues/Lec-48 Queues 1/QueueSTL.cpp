#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(10); // add at back
    q.push(20);
    q.push(30);
    q.pop(); // remove at front
    q.push(40);
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
}