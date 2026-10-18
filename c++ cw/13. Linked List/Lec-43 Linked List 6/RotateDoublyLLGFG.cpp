class Solution {
  public:
    Node *rotateDLL(Node *head, int k) {
        if(head == NULL || head->next == NULL) return head;
        
        //breaking the nodes
        Node* temp = head;
        for(int i=1;i<=k-1;i++){
            temp = temp->next;
        }
        if(temp->next == NULL) return head;
        Node* newHead = temp->next;
        temp->next = NULL;
        newHead->prev = NULL;
        
        //Traversing to end of NewHead
        Node* newTemp = newHead;
        while(newTemp->next != NULL){
            newTemp = newTemp->next;
        }
        newTemp->next = head;
        head->prev = newTemp;
        return newHead;
    }
};