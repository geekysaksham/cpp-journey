/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* first = head;
        ListNode* fend = head;
        ListNode* eend = head;
        for(int i=1;i<k;i++){
            first = first->next;
            eend = eend->next;
        }
        while(eend->next != NULL){
            fend = fend->next;
            eend = eend->next;
        }
        int temp = first->val;
        first->val = fend->val;
        fend->val = temp;
        return head;
    }
};