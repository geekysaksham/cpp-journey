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
        Node* n = new Node(val);
        if(idx == 0){
            n->next = head;
            head = n;
        }
        else if(idx > 0 && idx < size){
            Node* prevPtr = head;
            Node* currPtr = head;
            for(int i=1;i<idx;i++){
                prevPtr = prevPtr->next;
            }
            currPtr = prevPtr->next;
            prevPtr->next = n;
            n->next = currPtr;
        }
        else if(idx == size){
            tail->next = n;
            tail = n;
            tail->next = NULL;
        }
        else{
            cout<<"Invalid Index!"<<endl;
            return;
        }
        size++;
    }
    void remove(int idx){ //delete(idx)
        if(idx==0) head = head->next;
        else if(idx==size-1){
            Node* temp = head;
            for(int i=1;i<=size-2;i++){
                temp = temp->next;
            }
            tail = temp;
            tail->next = NULL;
        }
        else if(idx>0 && idx<size-1){
            Node* prevPtr = head;
            for(int i=1;i<idx;i++){
                prevPtr = prevPtr->next;
            }
            prevPtr->next = prevPtr->next->next;
        }
        else{
            cout<<"Invalid Index!"<<endl;
            return;
        }
        size--;
    }
    int get(int idx){
        if(idx == 0) return head->val;
        else if(idx>0 && idx<size){
            Node* temp = head;
            for(int i=1;i<=idx;i++){
                temp = temp->next;
            }
            return temp->val;
        }
        else{
            cout<<"Invalid Index!";
            return -1;
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

    list.insert(2, 50);
    list.display();

    list.insert(0, 60);
    list.display();

    list.remove(3);
    list.display();

    list.remove(0);
    list.display();

    cout << list.get(0) << endl;
    cout << list.get(2) << endl;

    cout << list.length() << endl;

}