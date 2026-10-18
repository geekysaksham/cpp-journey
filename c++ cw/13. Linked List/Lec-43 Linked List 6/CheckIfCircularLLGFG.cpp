class Solution {
  public:
    bool isCircular(Node *head) {
        if(head == NULL) return true;
        Node* temp = head;
        while(temp->next != head && temp->next != NULL){
            temp = temp->next;
        }
        if(temp->next == head) return true;
        else return false;
    }
};