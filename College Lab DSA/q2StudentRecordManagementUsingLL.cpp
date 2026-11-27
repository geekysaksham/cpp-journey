#include<iostream>
using namespace std;
class Node{
public:
    string name;
    int rno;
    float marks;
    Node* next;
    Node(string n, int r, float m) : name(n), rno(r), marks(m), next(NULL) {}
};
class StudentLinkedList{
    Node* head;
    Node* tail;
    int length;
public:
    StudentLinkedList() : head(NULL), tail(NULL), length(0) {}
    void insertAtPosition(string name, int rno, float marks, int pos){
        if(pos<0 || pos>length){ cout<<"Invalid Position!"<<endl; return; }
        Node* n = new Node(name,rno,marks);
        if(pos == 0){ n->next = head; head = n; if(!tail) tail = n; }
        else{
            Node* temp = head;
            for(int i=0;i<pos-1;i++) temp = temp->next;
            n->next = temp->next; temp->next = n;
            if(pos == length) tail = n;
        }
        length++;
    }
    void removeAtRollNo(int rno){
        if(length == 0){ cout<<"Student LinkedList is Empty!"<<endl; return; }
        else if(length == 1 && head->rno == rno){ head = tail = NULL; length = 0; return; }
        Node* temp = head;
        if(rno == head->rno){ head = head->next; if(head == NULL) tail = NULL; length--; return; }
        int flag = -1;
        while(temp){
            if(temp->next && temp->next->rno == rno){
                temp->next = temp->next->next;
                if(temp->next == NULL) tail = temp;
                flag = 1; break;
            }
            temp = temp->next;
        }
        if(flag == -1){ cout<<"No Element Found!"<<endl; return; }
        length--;
    }
    void reverseList(){
        Node *curr = head, *prev = NULL, *fwd;
        while(curr){
            fwd = curr->next; curr->next = prev;
            prev = curr; curr = fwd;
        }
        tail = head; head = prev;
    }
    void printList(){
        cout<<endl;
        if(length == 0) cout<<"Student LinkedList is Empty!"<<endl;
        Node* temp = head;
        while(temp){
            cout<<temp->name<<" "<<temp->rno<<" "<<temp->marks<<endl;
            temp = temp->next;
        }
    }
};
int main(){
    StudentLinkedList st;
    int operation;
    while(true){
        cout<<"\n----Menu Operations----"<<endl;
        cout<<"1.Insert    2.Delete    3.Reverse    4.Print    5.Exit\n";
        cout<<"\nChoose Operation: ";
        cin>>operation;
        switch(operation){
            case 1:{
                string n; int roll; float mark; int idx;
                cout<<"Enter Name, Roll No, Marks, Position: ";
                cin>>n>>roll>>mark>>idx;
                st.insertAtPosition(n,roll,mark,idx);
                break;
            }
            case 2:{
                int rol;
                cout<<"Enter Roll No: ";
                cin>>rol;
                st.removeAtRollNo(rol);
                break;
            }
            case 3: st.reverseList(); break;
            case 4: st.printList(); break;
            case 5: return 0;
            default: cout<<"Invalid Choice!"<<endl;
        }
    }
}