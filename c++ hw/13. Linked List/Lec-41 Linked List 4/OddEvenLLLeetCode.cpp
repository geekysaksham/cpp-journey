class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode* temp = head;
        ListNode* dummy1 = new ListNode(-1);
        ListNode* temp1 = dummy1;
        ListNode* dummy2 = new ListNode(-1);
        ListNode* temp2 = dummy2;
        int k = 1;
        while(temp!=NULL){
            if(k%2 != 0){
                temp1->next = temp;
                temp1 = temp1->next;
            }
            else{
                temp2->next = temp;
                temp2 = temp2->next;
            }
            k++;
            temp = temp->next;
        }
        temp1->next = dummy2->next;
        temp2->next = NULL;
        return dummy1->next;
    }
};