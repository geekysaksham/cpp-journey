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
    void insert(int idx, int val){
        if(idx<0 || idx>size){
            cout<<"Invalid Index!"<<endl;
            return;
        }
        else if(idx == 0){
            insertAtHead(val);
            return;
        }
        else if(idx == size){
            insertAtTail(val);
            return;
        }
        else{
            Node* n = new Node(30);
            Node* temp = head;
            for(int i=0;i<idx-1;i++){
                temp = temp->next;
            }
            n->next = temp->next;
            temp->next = n;
        }
        size++;
    }
    int get(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Index!"<<endl;
            return -1;
        }
        Node* temp = head;
        for(int i=0;i<idx;i++){
            temp = temp->next;
        }
        return temp->val;
    }
    void removeAtTail(){
        if(size == 0){
            cout<<"Underflow!"<<endl;
            return;
        }
        else if(size == 1){
            head = NULL;
            tail = NULL;
        }
        else{
            Node* temp = head;
            while(temp->next->next != NULL){
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;
        }
        size--;
    }
    void remove(int idx){
        if(size == 0){
            cout<<"Underflow"<<endl;
            return;
        }
        else if(idx<0 || idx >= size){
            cout<<"Invalid Index!"<<endl;
            return;
        }
        else if(idx == 0){
            removeAtHead();
        }
        else if(idx == size-1){
            removeAtTail();
        }
        else{
            Node* temp = head;
            for(int i=0;i<idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
        }
        size--;
    }
};
int main(){
    MyLinkedList list;
    list.insertAtTail(9);
    list.insertAtTail(-7);
    list.insertAtTail(1);
    list.insertAtTail(4);
    list.insertAtTail(41);
    list.display();
    list.insert(5,30);
    list.display();
    cout<<list.get(0)<<endl;
}