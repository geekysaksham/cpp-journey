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
    ListNode* deleteMiddle(ListNode* head) {
        //Method 2
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* temp = head;
        while(temp!=slow && temp->next != slow){
            temp = temp->next;
        }
        if(slow!=head){
            temp->next = temp->next->next;
        }
        else head = NULL;
        return head;



        //Method 1
        // ListNode* temp = head;
        // int count = 0;
        // while(temp != NULL){
        //     temp = temp->next;
        //     count++;
        // }
        // temp = head;
        // for(int i=0;i<(count/2-1);i++){
        //     temp = temp->next;
        // }
        // if(count>1) temp->next = temp->next->next;
        // if(count == 1) head = NULL;
        // return head;
    }
};