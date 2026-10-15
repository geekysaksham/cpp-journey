class Solution {
  public:
    Node* divide(Node* head) {
        Node* temp = head;
        Node* dummy1 = new Node(-1);
        Node* temp1 = dummy1;
        Node* dummy2 = new Node(-1);
        Node* temp2 = dummy2;
        while(temp!=NULL){
            if(temp->data %2 != 0){
                temp1->next = temp;
                temp1 = temp1->next;
            }
            else{
                temp2->next = temp;
                temp2 = temp2->next;
            }
            temp = temp->next;
        }
        temp2->next = dummy1->next;
        temp1->next = NULL;
        return dummy2->next;
        
    }
};