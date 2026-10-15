class Solution {
  public:
    int lenHelp(Node* head){
        Node* temp = head;
        int len = 0;
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
        return len;
    }
    Node* rotate(Node* head, int k) {
        if(head == NULL || head->next == NULL) return head;
        Node* temp = head;
        int len = lenHelp(temp);
        k = k%len;
        if(k==0) return head;
        for(int i=1;i<k;i++){
            temp = temp->next;
        }
        Node* newHead = temp->next;
        temp->next = NULL;
        Node* newHeadEnd = newHead;
        while(newHeadEnd->next != NULL){
            newHeadEnd = newHeadEnd->next;
        }
        newHeadEnd->next = head;
        head = newHead;
        return head;
    }
};