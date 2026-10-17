class Solution {
public:
    void reorderList(ListNode* head) {
        if(head->next != NULL){
            ListNode* slow = head;
            ListNode* fast = head;
            while(fast->next != NULL && fast->next->next != NULL){
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

            //Taking dummy node and merging both LL one by one.
            ListNode* dummy = new ListNode(-1);
            ListNode* temp1 = head;
            ListNode* temp2 = head2;
            ListNode* temp3 = dummy;
            
            //For 1 by 1
            int k = 1;
            while(temp1 != NULL && temp2 != NULL){
                if(k%2 != 0){
                    temp3->next = temp1;
                    temp1 = temp1->next;
                }
                else{
                    temp3->next = temp2;
                    temp2 = temp2->next;
                }
                temp3 = temp3->next;
                k++;
            }
            if(temp1 == NULL){
                temp3->next = temp2;
            }
            else{
                temp3->next = temp1;
            }
            head = dummy->next;
        }
    }
};