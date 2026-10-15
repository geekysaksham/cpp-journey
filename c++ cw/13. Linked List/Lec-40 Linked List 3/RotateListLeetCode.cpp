class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head;
        int len = 0;
        ListNode* temp = head;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        k = k%len;
        if(k==0) return head;
        temp = head;
        for(int i=1; i<len-k;i++){
            temp = temp->next;
        }
        ListNode* newHead = temp->next;
        temp->next = NULL;
        ListNode* temp2 = newHead;
        while(temp2->next != NULL){
            temp2 = temp2->next;
        }
        temp2->next = head;
        head = newHead;
        return head;
    }
};