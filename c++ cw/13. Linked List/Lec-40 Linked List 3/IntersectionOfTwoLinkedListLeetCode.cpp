class Solution {
public:
    int lenHelp(ListNode* head){
        ListNode* temp = head;
        int len=0;
        while(temp != NULL){
            temp = temp->next;
            len++;
        }
        return len;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        int len1 = lenHelp(tempA);
        int len2 = lenHelp(tempB);
        if(len1 != len2){
            for(int i=1;i<=abs(len1-len2);i++){
                if(len1>len2) tempA = tempA->next;
                else tempB = tempB->next;
            }
        }
        while(tempA != NULL && tempB != NULL){
            if(tempA == tempB) return tempA;
            tempA = tempA->next;
            tempB = tempB->next;
        }
        return NULL;
    }
};