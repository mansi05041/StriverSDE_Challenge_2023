/*****************************************************

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
        
        ~BinaryTreeNode() {
            if(left) 
                delete left;
            if(right) 
                delete right;
        }
    };

******************************************************/
bool Symmetric = true;
void helper(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2){
    if(!root1 && !root2) return;

    if(!root1 || !root2 || root1->data!=root2->data){
        Symmetric = false;
        return;
    }

    helper(root1->left,root2->right);
}

bool isSymmetric(BinaryTreeNode<int>* root){
    helper(root,root);
    return Symmetric;
}