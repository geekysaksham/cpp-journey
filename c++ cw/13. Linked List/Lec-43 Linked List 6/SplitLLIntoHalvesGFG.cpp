class Solution {
  public:
    pair<Node *, Node *> splitList(struct Node *head) {
        if(head == NULL) return {NULL,NULL};
        Node* slow = head;
        Node* fast = head;
        while(fast->next != head && fast->next->next != head){
            slow = slow->next;
            fast = fast->next->next;
        }
        Node* newHead = slow->next;
        slow->next = head;
        Node* newTemp = newHead;
        while(newTemp->next != head){
            newTemp = newTemp->next;
        }
        newTemp->next = newHead;
        return {head,newHead};
    }
};