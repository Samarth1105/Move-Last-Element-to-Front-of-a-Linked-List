struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    Node *moveToFront(Node *head) {
        if(head==NULL || head->next == NULL) {
            return head;
        }
        Node* curr=head;
        Node* prev=NULL;
        while(curr->next!=NULL){
            prev=curr;
            curr=curr->next;
        }
        prev->next=NULL;
        curr->next=head;
        return curr;
    }
};
