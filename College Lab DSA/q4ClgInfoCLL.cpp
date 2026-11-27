#include<iostream>
#include<string>
using namespace std;
class Node{
public:
    string name;
    int code;
    string city;
    Node* next;
    Node(string n, int co, string ci) : name(n), code(co), city(ci), next(NULL){}
};
class CollegeLinkedList{
public:
    Node* head;
    Node* tail;
    CollegeLinkedList() : head(NULL), tail(NULL){}
    void insertionAtFront(){
        string n; int cod; string cty;
        cout<<"Enter Name, Code, City Of College: ";
        cin>>n>>cod>>cty;
        Node* newNode = new Node(n,cod,cty);
        if(head == NULL){ head = tail = newNode; tail->next = head; }
        else{ newNode->next = head; head = newNode; tail->next = head; }
    }
    void removeAtEnd(){
        if(head == NULL){ cout<<"Underflow Condition!"<<endl; return; }
        else if(head == tail){ head = tail = NULL; return; }
        else{
            Node* temp = head;
            while(temp->next != tail) temp = temp->next;
            temp->next = head; tail = temp;
        }
    }
    void display(){
        if(head == NULL){ cout<<"Underflow Condition!"<<endl; return; }
        Node* temp = head;
        do{ 
            cout<<temp->name<<" "<<temp->code<<" "<<temp->city<<endl;
            temp = temp->next; 
        }while(temp != head);
    }
};
int main(){
    CollegeLinkedList l;
    int choice;
    while(true){
        cout<<"\n----College LinkedList Menu----"<<endl;
        cout<<"1. Insert College at Front     2. Delete College From End"<<endl;
        cout<<"3. Display Colleges            4. Exit"<<endl;
        cout<<"\nEnter Choice: ";
        cin>>choice;
        switch(choice){
            case 1: l.insertionAtFront(); break;
            case 2: l.removeAtEnd(); break;
            case 3: l.display(); break;
            case 4: return 0;
            default: cout<<"Invalid Choice!"<<endl;
        }
    }
}