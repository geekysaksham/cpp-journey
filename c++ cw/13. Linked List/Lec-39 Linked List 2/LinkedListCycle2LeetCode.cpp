class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow){
                ListNode* temp = head;
                while(temp != slow){
                    temp = temp->next;
                    slow = slow->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};