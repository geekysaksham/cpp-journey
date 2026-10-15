class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;
        ListNode* dummy = new ListNode(-101);
        ListNode* i = list1;
        ListNode* j = list2;
        ListNode* k = dummy;
        while(i!=NULL && j!=NULL){
            if(i->val < j->val){
                k->next = i;
                i = i->next;
                k = k->next;
            }
            else{
                k->next = j;
                j = j->next;
                k= k->next;
            }
        }
        if(i==NULL){
            k->next = j;
        }
        else k->next = i;
        return dummy->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next == NULL) return head;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* newHead = slow->next;
        slow->next = NULL;
        head = sortList(head);
        newHead = sortList(newHead);
        return mergeTwoLists(head,newHead);
    }
};