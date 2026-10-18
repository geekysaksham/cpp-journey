class Solution {
  public:
    Node* deleteNode(Node* head, int key) {
            if (head == NULL) return NULL;

            // Single node
            if (head->next == head) {
                if (head->data == key) {
                    delete head;
                    return NULL;
                }
                return head;
            }

            // Delete head
            if (head->data == key) {
                Node* last = head;
                while (last->next != head) {
                    last = last->next;
                }

                Node* del = head;
                head = head->next;
                last->next = head;
                delete del;
            }

            // Delete other nodes
            Node* curr = head;
            while (curr->next != head) {
                if (curr->next->data == key) {
                    Node* del = curr->next;
                    curr->next = del->next;
                    delete del;
                    break;
                } else {
                    curr = curr->next;
                }
            }

            return head;
    }
};