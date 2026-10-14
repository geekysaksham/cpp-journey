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
class MyLinkedList{
private:
    Node* head;
    Node* tail;
    int size;
public:
    MyLinkedList(){
        head = tail = NULL;
        size = 0;
    }
    int length(){
        return this->size;
    }
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void insertAtTail(int val){
        Node* n = new Node(val);
        if(size == 0) head = tail = n;
        else{
            tail->next = n;
            tail = n;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* n = new Node(val);
        if(size == 0) head = tail = n;
        else{
            n->next = head;
            head = n;
        }
        size++;
    }
    void removeAtHead(){
        if(size == 0) cout<<"Underflow Condition!"<<endl<<"Stack is Empty!"<<endl;
        else{
            head = head->next;
            size--;
        }
    }
};
int main(){
    MyLinkedList list;

    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.display();

    list.insertAtHead(40);
    list.display();

    cout << list.length() << endl;

}