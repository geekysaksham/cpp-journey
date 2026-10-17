class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head->next == NULL) return true;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* head2 = slow->next;
        slow->next = NULL;

        //reversing head2
        ListNode* prev = NULL;
        ListNode* curr = head2;
        while(curr != NULL){
            ListNode* fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
        }
        head2 = prev;

        //Checking for palindrome
        while(head2 != NULL){
            if(head2->val != head->val) return false;
            head = head->next;
            head2 = head2->next;
        }
        return true;
    }
};