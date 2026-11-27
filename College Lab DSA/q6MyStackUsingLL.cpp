#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int data) : val(data), next(NULL){}
};
class MyStack{
public:
    Node* head;
    MyStack() : head(NULL){}
    void push(int val){
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }
    void pop(){
        if(!head){ cout<<"Underflow Condition!"<<endl; return; }
        head = head->next;
    }
    int peek(){
        if(!head){ cout<<"Stack is Empty!"<<endl; return -1; }
        return head->val;
    }
    void display(){
        if(!head){ cout<<"Stack is Empty!"<<endl; return; }
        Node* temp = head;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    MyStack st;
    int choice;
    while(true){
        cout<<"\n--- Stack Using Linked List ---"<<endl;
        cout<<"1. Push               2. Pop\n3.Peek                4.Traverse\n5.Exit"<<endl;
        cout<<"\nEnter your Choice: ";
        cin>>choice;
        switch(choice){
            case 1:{
                int val;
                cout<<"Enter Element Value: ";
                cin>>val;
                st.push(val);
                break;
            }
            case 2: st.pop(); break;
            case 3: cout<<"Peek Element: "<<st.peek()<<endl; break;
            case 4: st.display(); break;
            case 5: return 0;
            default: cout<<"Invalid Choice!";
        }
    }
}