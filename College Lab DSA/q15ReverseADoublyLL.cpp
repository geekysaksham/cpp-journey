#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node *prev, *next;
    Node(int val) {
        data = val;
        prev = next = NULL;
    }
};
class DoublyLinkedList {
    Node *head;
public:
    DoublyLinkedList() {
        head = NULL;
    }
    void insert(int val) {
        Node *newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
    }
    void reverse() {
        Node *temp = NULL;
        Node *current = head;
        while (current != NULL) {
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;
            current = current->prev;
        }
        if (temp != NULL)
            head = temp->prev;
    }
    void display() {
        Node *temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};
int main() {
    DoublyLinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    cout << "Original List: ";
    list.display();
    list.reverse();
    cout << "\nReversed List: ";
    list.display();
    return 0;
}