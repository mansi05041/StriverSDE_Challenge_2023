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
bool helper(BinaryTreeNode<int>* root,int minVal,int maxVal){
    // base case
    if(!root) return true;
    // if the node value is out of boundary
    if(root->data < minVal || root->data > maxVal) return false;

    return (helper(root->left,minVal,root->data)&&helper(root->right,root->data,maxVal));
}

bool validateBST(BinaryTreeNode<int>* root){
    return helper(root,INT_MIN,INT_MAX);
}