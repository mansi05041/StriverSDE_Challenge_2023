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
int height(BinaryTreeNode<int>* root){
    if(!root) return 0;

    int leftH = height(root->left);
    int rightH = height(root->right);

    return 1+max(leftH,rightH);
}

bool isBalancedBT(BinaryTreeNode<int>* root){
    if(!root) return true;
    if(isBalancedBT(root->left) && isBalancedBT(root->right)){
        if(abs(height(root->left)-height(root->right))<=1) return true;
    }
    return false;
}