#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int data) : val(data), next(NULL){}
};
class MyQueue{
public:
    Node* head;
    Node* tail;
    MyQueue() : head(NULL), tail(NULL){}
    void insert(int ele){
        Node* newNode = new Node(ele);
        if(!head && !tail) head = tail = newNode;
        else{ tail->next = newNode; tail = newNode; }
    }
    void deleteNode(){
        if(!head){ cout<<"Underflow Condition!"<<endl; return; }
        if(!(head->next)){ head = tail = NULL; return; }
        head = head->next;
    }
    void display(){
        if(!head){ cout<<"Queue is Empty!"<<endl; return; }
        Node* temp = head;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    MyQueue q;
    while(true){
        cout<<"\n---- Linear Queue Using Linked List ----"<<endl;
        cout<<"1. Insert (Enqueue)     2. Delete (Dequeue)\n3. Display              4.Exit"<<endl;
        int choice; cout<<"\nEnter Your Choice: "; cin>>choice;
        switch(choice){
            case 1:{
                int ele; cout<<"Enter Element : "; cin>>ele;
                q.insert(ele); break;
            }
            case 2: q.deleteNode(); break;
            case 3: q.display(); break;
            case 4: return 0;
            default: cout<<"Invalid Choice!"<<endl;
        }
    }
}