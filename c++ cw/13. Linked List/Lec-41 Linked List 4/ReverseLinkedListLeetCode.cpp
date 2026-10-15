class Solution {
public:
    int lenHelp(ListNode* head){
        ListNode* temp = head;
        int len = 0;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        return len;
    }
    ListNode* reverseList(ListNode* head) {
        //Method 2
        if(head == NULL || head->next == NULL) return head;
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* fwd = head;
        while(curr != NULL){
            fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
        }
        return prev;



        //Method 1
        // if(head == NULL || head->next == NULL) return head;
        // int len = lenHelp(head);
        // ListNode* newHead = head;
        // while(newHead->next != NULL){
        //     newHead = newHead->next;
        // }
        // for(int i = len; i>=2;i--){
        //     ListNode* prevTemp = head;
        //     ListNode* temp = head;
        //     for(int j=1;j<=i-2;j++){
        //         prevTemp = prevTemp->next;
        //     }
        //     temp = prevTemp->next;
        //     temp->next = prevTemp;
        // }
        // head->next = NULL;
        // return newHead;
    }
};