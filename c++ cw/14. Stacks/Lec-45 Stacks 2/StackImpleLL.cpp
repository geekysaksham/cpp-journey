#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        next = NULL;
    }
};
class MyStack{
private:
    Node* head;
    Node* tail;
    int length;
public:
    MyStack(){
        head = tail = NULL;
        length = 0;
    }
    void push(int val){
        Node* n = new Node(val);
        if(head == NULL && tail == NULL) head = tail = n;
        else{
            n->next = head;
            head = n;
        }
        length++;
    }
    void pop(){
        if(length == 0){
            cout<<"Underflow Condition!"<<endl;
            return;
        }
        else{
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        length--;
    }
    int top(){
        if(length == 0){
            cout<<"Stack is Empty!"<<endl;
            return -1;
        }
        else return head->val;
    }
    int size(){
        return length;
    }
    void display(){ //Top to Bottom
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    MyStack st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.pop();
    st.display();
}