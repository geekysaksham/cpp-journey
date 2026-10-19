class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        if(head->next == NULL) return head;
        ListNode* temp = head;
        stack<ListNode*> st;
        while(temp != NULL){
            while(st.size()>0 && st.top()->val<temp->val) st.pop();
            st.push(temp);
            temp = temp->next;
        }
        //Creating new Node n
        ListNode* n = NULL;
        ListNode* nhead = n;

        //Popping Element from Stack and Adding to head of new LL
        while(st.size()>0){
            if(nhead == NULL) nhead = st.top();
            else{
                st.top()->next = nhead;
                nhead = st.top();
            }
            st.pop();
        }
        return nhead;
    }
};