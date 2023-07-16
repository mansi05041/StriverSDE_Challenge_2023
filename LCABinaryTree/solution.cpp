/************************************************************

    Following is the TreeNode class structure

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

TreeNode<int>* helper(TreeNode<int>* root,int x,int y){
    // base case
    if(!root || root->data==x || root->data==y) return root;

    TreeNode<int>* left = helper(root->left,x,y);
    TreeNode<int>* right = helper(root->right,x,y);

    if(!left) return right;
    else if(!right) return left;
    else return root;
}

int lowestCommonAncestor(TreeNode<int>* root,int x,int y){
    int data = helper(root,x,y)->data;
    return data;
}