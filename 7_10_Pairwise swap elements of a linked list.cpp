/*
  reverse alternate nodes and append at the end
  The input list will have at least one element
  Node is defined as
  struct Node
  {
      int data;
      struct Node *next;

      Node(int x){
        data = x;
        next = NULL;
      }

   };

*/
class Solution
{
public:

    Node*reverse(Node*head) {
        // edge case=> zero or one element case
        if (!head or !head->next) {
            return head;
        }
        Node*smallHead = reverse(head->next);
        Node*temp = head;
        temp->next->next = head;
        temp->next = NULL;
        return smallHead;

    }

    void rearrange(struct Node *odd)
    {
        Node *first = odd;  // odd nodes
        Node *second = odd->next;   // even nodes
        Node *temp = odd->next;

        // iterating over the linked list

        while (first->next and second->next) {
            first->next = first->next->next;
            first = first->next;
            second->next = second->next->next;
            second = second->next;
        }

        //  here, temp== second at the end of the iteratu=ion
        first->next = reverse(temp);
    }
};