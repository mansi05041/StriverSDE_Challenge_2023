/************************************************************

    Following is the TreeNode class structure.

    template <typename T>
    class TreeNode {
        public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void helper(TreeNode<int>* root,TreeNode<int>*& prev){
    // base case
    if(!root) return;

    // flatten the right subtree
    helper(root->right,prev);
    // flatten the left subtree
    helper(root->left,prev);

    // attach the root's right with prev
    root->right = prev;
    // attach the root's left with NULL
    root->left = NULL;

    // update the prev
    prev = root;
}

TreeNode<int>* flattenBinaryTree(TreeNode<int>* root){
    TreeNode<int>* prev = NULL;
    helper(root,prev);
    return prev;
}