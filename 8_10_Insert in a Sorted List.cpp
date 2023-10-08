/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

/*
my approach => very poor [multiple if-else]
int x= data;
Node *temp= head;

// single node
if(temp->next==NULL){
    if(temp->data<x){
        Node *insert = new Node(x);
        temp->next= insert;
    }
    else{
        Node *insert = new Node(x);
        insert->next=temp;
    }

}

//insertion at begining
else if(temp->data>x){
    Node *insert = new Node(x);
    insert->next=temp;
    head=insert;
}

// insertion at end
else if(temp->next->next==NULL and temp->data<x){
    if(temp->next->data<x){
        Node *insert = new Node(x);
        temp->next=insert;
    }
    else{
        Node *insert = new Node(x);
        insert->next=temp->next;
        temp->next=insert;
    }
}
else{
    while(temp->next->next!=NULL and temp->next->data<x){
        temp=temp->next;
    }
    Node *insert= new Node(x);
    insert->next=temp->next;
    temp->next=insert;
}

return head;
*/

class Solution {
public:
        // Should return head of the modified linked list
        Node *sortedInsert(struct Node* head, int data) {
                // Code here
                Node *temp = head;
                Node *prev = NULL;

                // if first element is greater than data
                if (temp->data > data) {
                        Node *newNode = new Node(data);
                        newNode->next = temp;
                        head = newNode;
                        return head;
                }
                else {
                        while (temp != NULL and temp->data <= data) {
                                prev = temp;
                                temp = temp->next;
                        }
                        Node *newNode = new Node(data);
                        prev->next = newNode;
                        newNode->next = temp;

                        return head;
                }


        }
};