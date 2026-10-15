class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Method 2
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



        //Method 1
        // if(list1 == NULL) return list2;
        // if(list2 == NULL) return list1;
        // ListNode* mergeList = new ListNode(-101);
        // ListNode* temp1 = list1;
        // ListNode* temp2 = list2;
        // ListNode* temp = mergeList;
        // while(temp1 != NULL && temp2 != NULL){
        //     if((temp1->val) > (temp2->val)){
        //         ListNode* tempVar = new ListNode(temp2->val);
        //         temp->next = tempVar;
        //         temp = temp->next;
        //         temp2 = temp2->next;
        //     }
        //     else{
        //         ListNode* tempVar = new ListNode(temp1->val);
        //         temp->next = tempVar;
        //         temp = temp->next;
        //         temp1 = temp1->next;
        //     }
        // }
        // if(temp1 == NULL){
        //     temp->next = temp2;
        // }
        // else{
        //     temp->next = temp1;
        // }
        // return mergeList->next;
    }
};