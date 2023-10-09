/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
class Solution {
public:
    //Function to find the height of a binary tree.
    int height(struct Node* node) {
        if (node == NULL) return 0;

        int lefth = height(node->left);
        int righth = height(node->right);
        return max(lefth, righth) + 1;
    }
};