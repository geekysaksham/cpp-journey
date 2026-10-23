#include<iostream>
#include<queue>
using namespace std;
// void queueTraversingFrontToRear(queue<int> q){
//     while(q.size() > 0){
//         cout<<q.front()<<" ";
//         q.pop();
//     }
// }
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    // queueTraversingFrontToRear(q);

    //Traversing Front to Rear
    int n = q.size();
    for(int i=1;i<=n;i++){
        int ele = q.front();
        cout<<ele<<" ";
        q.pop();
        q.push(ele);
    }
}