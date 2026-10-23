#include<iostream>
#include<queue>
using namespace std;
void pushAtPos(int idx, int ele, queue<int>& q){
    int n = q.size();
    if(idx==n){
        q.push(ele);
        return;
    }
    for(int i=0;i<n;i++){
        if(i==idx){
            q.push(ele);
            q.push(q.front());
            q.pop();
        }
        else{
            int temp = q.front();
            q.pop();
            q.push(temp);
        }
    }
}
void PopAtPos(int idx, queue<int>& q){
    int n = q.size();
    if(idx<0 || idx>n-1){
        cout<<"Invalid Index!"<<endl;
        return;
    }
    else{
        for(int i=0;i<n;i++){
            if(i == idx){
                q.pop();
                continue;
            }
            int ele = q.front();
            q.pop();
            q.push(ele);
        }
    }

}
int getAtPos(int idx, queue<int> q){
    int n = q.size();
    if(idx<0 || idx>n-1){
        cout<<"Invalid Index!"<<endl;
        return -1;
    }
    else{
        for(int i=0;i<n;i++){
            if(i == idx) return q.front();
            int ele = q.front();
            q.pop();
            q.push(ele);
        }
    }
    return -1;
}
void printQueue(queue<int>& q){
    int n = q.size();
    for(int i=0;i<n;i++){
        int ele = q.front();
        cout<<ele<<" ";
        q.pop();
        q.push(ele);
    }
    cout<<endl;
}
int main(){
    queue<int> q;

    // q.push(20);
    // q.push(30);
    // q.push(40);
    // printQueue(q);
    // pushAtPos(1,50,q);
    // printQueue(q);

    // q.push(18);
    // q.push(33);
    // q.push(45);
    // q.push(7);
    // q.push(10);
    // printQueue(q);
    // pushAtPos(2,1,q);
    // printQueue(q);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    printQueue(q);
    pushAtPos(0, 60, q);
    PopAtPos(1, q);
    printQueue(q);
    cout<<getAtPos(0,q)<<endl;
    cout<<getAtPos(1,q)<<endl;
    cout<<getAtPos(2,q)<<endl;
    cout<<getAtPos(3,q)<<endl;

}