/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        //Method 2
        Node* slow = head;
        Node* fast = head;
        for(int i=1;i<=k;i++){
            if(fast == NULL) return -1;
            fast = fast->next;
        }
        while(fast!=NULL){
            slow = slow->next;
            fast = fast->next;
        }
        return slow->data;
        
        
        
        //Method 1
        // int len = 0;
        // Node* temp = head;
        // while(temp != NULL){
        //     temp = temp->next;
        //     len++;
        // }
        // temp = head;
        // if(k>len) return -1;
        // for(int i=0;i<(len-k);i++){
        //     temp = temp->next;
        // }
        // return temp->data;
    }
};