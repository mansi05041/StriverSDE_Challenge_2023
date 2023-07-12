/*
    Following is the Binary Tree node structure:

    class BinaryTreeNode {
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
*/
bool searchInBST(BinaryTreeNode<int>* root,int x){
    while(root){
        if(root->data == x) return true;

        // check if the x is less than root, then move to left
        else if(x<root->data) root = root->left;

        // otherwise move to right
        else root = root->right;
    }
    return false;
}