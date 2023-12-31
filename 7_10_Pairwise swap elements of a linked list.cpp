/*
  Pairwise swap a linked list
  The input list will have at least one element
  node is defined as

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}*head;
*/
class Solution
{
public:
    Node* pairWiseSwap(struct Node* head)
    {
        Node*temp = new Node(0);
        temp->next = head;
        Node*prev = temp;
        Node*curr = head;
        while (curr != NULL and curr->next != NULL) {
            Node* nextNode = curr->next;
            Node* nodeNextToNextNode = curr->next->next;
            nextNode->next = curr;
            curr->next = nodeNextToNextNode;
            prev->next = nextNode;
            prev = curr;
            curr = nodeNextToNextNode;
        }
        return temp->next;
    }
};