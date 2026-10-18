class Solution {
  public:
    void printList(Node* head) {
        Node* temp = head;
        while(temp->next != head){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<temp->data<<" ";
        return;
    }
};