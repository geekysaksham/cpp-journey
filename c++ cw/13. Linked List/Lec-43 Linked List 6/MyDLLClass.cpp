#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* prev;
    Node* next;
    Node(int val){
        this->val = val;
        prev = NULL;
        next = NULL;
    }
    Node(){}
};
class MyDoublyLL{
private:
    Node* head;
    Node* tail;
    int size;
public:
    MyDoublyLL(){
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void insertAtHead(int val){
        Node* n = new Node(val);
        if(head == NULL && tail == NULL){
            head = n;
            tail = n;
        }
        else{
            n->next = head;
            head->prev = n;
            head = n;
        }
        size++;
    }
    void insertAtTail(int val){
        Node* n = new Node(val);
        if(head == NULL && tail == NULL){
            head = n;
            tail = n;
        }
        else{
            tail->next = n;
            n->prev = tail;
            tail = n;
        }
        size++;
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
        Node* n = new Node(val);
        Node* temp = head;
        for(int i=0;i<idx-1;i++){
            temp = temp->next;
        }
        n->prev = temp;
        n->next = temp->next;
        temp->next = n;
        n->next->prev = n;
        size++;
    }
    void removeAtHead(){
        if(size == 0){
            cout<<"Underflow Condition!"<<endl;
            return;
        }
        if(size == 1){
            head = NULL;
            tail = NULL;
            size--;
            return;
        }
        Node* newHead = head->next;
        head->next->prev = NULL;
        head = newHead;
        size--;
    }
    void removeAtTail(){
        if(size == 0){
            cout<<"Underflow Condition!"<<endl;
            return;
        }
        if(size == 1){
            head = NULL;
            tail = NULL;
            size--;
            return;
        }
        Node* newTail = tail->prev;
        tail->prev->next = NULL;
        tail = newTail;
        size--;
    }

    void remove(int idx){
        if(idx<0 || idx>size-1){
            cout<<"Invalid Index!"<<endl;
            return;
        }
        else if(size == 0){
            cout<<"UnderFlow Condition!"<<endl;
            return;
        }
        else if(idx == 0){
            removeAtHead();
            return;
        }
        else if(idx == size-1){
            removeAtTail();
            return;
        }
        else{
            Node* temp = head;
            for(int i=0;i<idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            temp->next->prev = temp;
        }
        size--;
    }

    int length(){
        return size;
    }

};
int main(){
    MyDoublyLL ll;

ll.insertAtHead(10);
ll.insertAtHead(20);
ll.insertAtTail(30);
ll.insert(1, 15);
ll.insert(4, 40);

ll.print();
cout << ll.length() << endl;

ll.removeAtHead();
ll.removeAtTail();
ll.insert(2, 25);
ll.remove(1);

ll.print();
cout << ll.length() << endl;

ll.removeAtHead();
ll.removeAtHead();
ll.removeAtHead();

ll.print();
cout << ll.length() << endl;
}