
/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
      Node* temp=head;
      Node* lastnode=new Node(x);
      while(temp!=NULL){
          temp=temp->next;
      }
      temp->next=lastnode;
      return head;
    }
    
};
