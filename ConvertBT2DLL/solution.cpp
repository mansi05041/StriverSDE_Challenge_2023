/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
void convertToDLL(BinaryTreeNode<int>* root,BinaryTreeNode<int>* &head,BinaryTreeNode<int>* &prev){

    // base case
    if(!root) return;

    // move to left
    convertToDLL(root->left,head,prev);

    // update the right pointer
    if(!prev) head = root;
    else prev->right = root;

    // update the left pointer
    root->left = prev;
    prev = root;

    // move to right
    convertToDLL(root->right,head,prev);
}

BinaryTreeNode<int>* BTtoDLL(BinaryTreeNode<int>* root){

    BinaryTreeNode<int>* head = NULL;
    BinaryTreeNode<int>* prev = NULL;
    convertToDLL(root,head,prev);
    return head;
}