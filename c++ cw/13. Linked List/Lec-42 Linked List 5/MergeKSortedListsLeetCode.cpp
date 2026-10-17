class Solution {
public:
    ListNode* mergeTwoSortedLL(ListNode* list1, ListNode* list2) {
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // Method 2
        if(lists.size()==0) return NULL;
        if(lists.size()==1) return lists[0];
        vector<ListNode*> temp;
        while(lists.size() + temp.size() > 1){
            while(lists.size()>1){
                ListNode* a = lists[lists.size()-1];
                lists.pop_back();
                ListNode* b = lists[lists.size()-1];
                lists.pop_back();
                ListNode* c = mergeTwoSortedLL(a,b);
                temp.push_back(c);
            }
            while(temp.size()>1){
                ListNode* a = temp[temp.size()-1];
                temp.pop_back();
                ListNode* b = temp[temp.size()-1];
                temp.pop_back();
                ListNode* c = mergeTwoSortedLL(a,b);
                lists.push_back(c);
            }
            if(lists.size() == 1 && temp.size()==1){
                ListNode* a = lists[0];
                lists.pop_back();
                temp.push_back(a);
            }
        }
        return (temp.size() == 1) ? temp[0] : lists[0];




        // Method 1
        // if(lists.size()==0) return NULL;
        // if(lists.size()==1) return lists[0];
        // int j=0;
        // ListNode* ans = NULL;
        // while(j<lists.size()){
        //     ans = mergeTwoSortedLL(ans,lists[j]);
        //     j++;
        // }
        // return ans;
    }
};