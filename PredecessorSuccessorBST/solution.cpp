/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

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

        ~BinaryTreeNode() {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/

// function to find the predecessor 
void predecessor(BinaryTreeNode<int>* root,int key,int& pre){
    while(root){
        if(key<=root->data){
            // then move to left
            root = root->left;
        }
        else{
            // update the predecessor and move to right
            pre = root->data;
            root = root->right;
        }
    }
}

// function to find the successor 
void successor(BinaryTreeNode<int>* root,int key,int& suc){
    while(root){
        if(key>=root->data){
            // move to right
            root = root->right;
        }
        else{
            // update the successor and move to the left
            suc = root->data;
            root = root->left;
        }
    }
}

pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root,int key){
    int pre = -1;
    int suc = -1;

    predecessor(root,key,pre);
    successor(root,key,suc);

    return {pre,suc};
}