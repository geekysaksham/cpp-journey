#include<iostream>
using namespace std;
class Node{
public:
    Node* next;
    int val;
    Node(int val){
        this->val = val;
        next = NULL;
    }
};
class MyQueue{
private:
    Node* head;
    Node* tail;
    int length;
public:
    MyQueue(){
        head = tail = NULL;
        length = 0;
    }
    int size(){
        return length;
    }
    void push(int val){
        Node* n = new Node(val);
        if(length == 0){
            head = tail = n;
        }
        else{
            tail->next = n;
            tail = n;
        }
        length++;
    }
    void pop(){
        if(length == 0){
            cout<<"Underflow Condition!"<<endl;
            return;
        }
        else{
            head = head->next;
        }
        length--;
        if(length == 0) tail = NULL;
    }
    int front(){
        if(length == 0){
            cout<<"Queue is Empty!"<<endl;
            return -1;
        }
        else{
            return head->val;
        }
    }
    void display(){
        if(length == 0){
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    MyQueue q;
    // q.display();
    // cout << q.size() << endl;
    // q.pop();
    // cout << q.front() << endl;


    // q.push(10);
    // q.pop();
    // cout << q.size() << endl;
    // q.display();
    // q.pop();



    cout<<q.size()<<endl;
    q.push(10);
    q.push(20);
    q.push(30);
    q.display();
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    q.pop();
    q.display();
    cout<<q.front()<<endl;
    q.push(40);
    q.push(50);
    q.display();
    cout<<q.size()<<endl;
    q.pop();
    q.pop();
    q.display();
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
}