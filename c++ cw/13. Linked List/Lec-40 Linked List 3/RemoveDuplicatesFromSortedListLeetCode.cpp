class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        //Method 2
        if(head == NULL || head->next == NULL) return head;
        ListNode* i = head;
        ListNode* j = head->next;
        while(j != NULL){
            if(i->val == j->val) j = j->next;
            else{
                i->next = j;
                i = j;
                j = j->next;
            }
        }
        i->next = NULL;
        return head;


        //Method 1
        // if(head == NULL || head->next == NULL) return head;
        // ListNode* prev = head;
        // ListNode* curr = head->next;
        // while(curr != NULL){
        //     if(curr->val == prev->val){
        //         prev->next = curr->next;
        //         curr = prev->next;
        //         continue;
        //     }
        //     prev = prev->next;
        //     curr = curr->next;
        // }
        // return head;
    }
};