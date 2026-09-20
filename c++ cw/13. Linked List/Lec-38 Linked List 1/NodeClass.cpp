#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
    }
};

int main(){
    Node a(7); //head
    Node b(0);
    Node c(1);
    Node d(8);
    Node e(2);
    // cout<<a.val<<endl;

    //attaching nodes
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = NULL;

    // cout<<b.val<<endl;
    // cout<<(*a.next).val<<endl;
    cout<<a.next->val<<endl;
    cout<<c.next->val<<endl;

}