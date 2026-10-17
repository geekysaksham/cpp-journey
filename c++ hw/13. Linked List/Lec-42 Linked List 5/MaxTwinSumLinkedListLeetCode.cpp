class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* head2 = slow->next;
        slow->next = NULL;
        
        //Reversing head2
        ListNode* prev = NULL;
        ListNode* curr = head2;
        while(curr != NULL){
            ListNode* fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
        }
        head2 = prev;

        //Checking Maximum twin sum
        int maxSum = 0;
        while(head != NULL){
            if(head->val + head2->val > maxSum) maxSum = head->val + head2->val;
            head = head->next;
            head2 = head2->next;
        }
        return maxSum;
    }
};