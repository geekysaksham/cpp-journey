class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        if(head == NULL || head->next == NULL) return head;
        Node* temp = head;
        while(temp->next != NULL){
            if(temp->data == temp->next->data){
                if(temp == head){
                    head = head->next;
                }
                else{
                    temp->next = temp->next->next;
                    continue;
                }
            }
            temp = temp->next;
        }
        return head;
    }
};