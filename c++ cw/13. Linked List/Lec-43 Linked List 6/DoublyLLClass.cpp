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
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void printRev(Node* tail){
    Node* temp = tail;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}
int main(){
    Node* n1 = new Node(3);
    Node* n2 = new Node(12);
    Node* n3 = new Node(7);
    Node* n4 = new Node(33);

    Node* head = n1;
    Node* tail = n4;

    n1->next = n2;  n2->prev = n1;
    n2->next = n3;  n3->prev = n2;
    n3->next = n4;  n4->prev = n3;

    print(head);
    printRev(tail);
}