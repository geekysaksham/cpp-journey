class Solution {
  public:
    Node *reverse(Node *head) {
        if(head == NULL || head->next == NULL) return head;
        Node* curr = head;
        Node* back = NULL;
        while(curr != NULL){
            Node* fwd = curr->next;
            curr->next = back;
            curr->prev = fwd;
            back = curr;
            curr = fwd;
        }
        return back;
        
    }
};
