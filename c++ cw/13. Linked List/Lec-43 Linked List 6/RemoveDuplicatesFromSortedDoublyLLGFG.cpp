class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        if(head == NULL || head->next == NULL) return head;
        Node* temp = head;
        while(temp->next != NULL){
            if(temp->data == temp->next->data){
                if(temp == head){
                    head = head->next;
                    head->prev = NULL;
                }
                else{
                    Node* nextTemp = temp->next->next;
                    temp->next = nextTemp;
                    if(nextTemp != NULL) nextTemp->prev = temp;
                    continue;
                }
            }
            temp = temp->next;
        }
        return head;
    }
};