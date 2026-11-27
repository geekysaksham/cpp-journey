#include<iostream>
#include<string>
using namespace std;
class Employee{
public:
    string name;
    int emp_id;
    float salary;
};
class Node{
public:
    Employee e;
    Node *next, *prev;
    Node(string n, int id, float s){ e = {n,id,s}; next = prev = NULL; }
};
class DoublyLinkedList{
public:
    Node *head, *tail;
    DoublyLinkedList() : head(NULL), tail(NULL) {}
    void insertAtFront(string n, int id, float sal){
        Node* newNode = new Node(n,id,sal);
        if(!head) head = tail = newNode;
        else{ newNode->next = head; head->prev = newNode; head = newNode; }
    }
    void deleteFromEnd(){
        if(head == NULL) cout<<"Doubly Linked List is Empty!"<<endl;
        else if(head->next == NULL) head = tail = NULL;
        else{ tail = tail->prev; tail->next = NULL; }
    }
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->e.name<<"  "<<temp->e.emp_id<<"  "<<temp->e.salary<<endl;
            temp = temp->next;
        }
    }
};
int main(){
    DoublyLinkedList l;
    int choice;
    while(true){
        cout<<"\n----- DOUBLY LINKED LIST MENU -----"<<endl;
        cout<<"1. Insert Employee at Front    2. Delete Employee from End"<<endl;
        cout<<"3. Display Employees           4. Exit"<<endl;
        cout<<endl;
        cout<<"Enter Your Choice: ";
        cin>>choice;
        switch(choice){
            case 1:{
                string n; int id; float sal;
                cout<<"Enter Name, ID, Salary of Employee: ";
                cin>>n>>id>>sal;
                l.insertAtFront(n,id,sal);
                break;
            }
            case 2: l.deleteFromEnd(); break;
            case 3: l.display(); break;
            case 4: return 0;
            default: cout<<"Invalid Choice!"<<endl;
        }
    }
}