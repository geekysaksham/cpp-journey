class Solution {
  public:
    Node* reverseCircular(Node* head) {
        Node* temp  = head;
        while(temp->next != head){
            temp = temp->next;
        }
        temp->next = NULL;
        Node* prev = NULL;
        Node* curr = head;
        while(curr != NULL){
            Node* fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
        }
        head = prev;
        temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = head;
        return head;
    }
};