class Solution {
  public:
    Node* partition(Node* head, int x) {
        Node* temp = head;
        Node* dummy1 = new Node(-1);
        Node* temp1 = dummy1;
        Node* dummy2 = new Node(-1);
        Node* temp2 = dummy2;
        Node* dummy3 = new Node(-1);
        Node* temp3 = dummy3;
        while(temp != NULL){
            if(temp->data < x){
                temp1->next = temp;
                temp1 = temp1->next;
            }
            else if(temp->data == x){
                temp2->next = temp;
                temp2 = temp2->next;
            }
            else{
                temp3->next = temp;
                temp3 = temp3->next;
            }
            temp = temp->next;
        }
        temp3->next = NULL;
        temp2->next = dummy3->next;
        temp1->next = dummy2->next;
        return dummy1->next;
    }
};