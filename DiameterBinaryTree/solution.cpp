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
int GetDiameter(TreeNode<int>* root, int& diameter){
    // base case
    if(!root) return 0;

    // get the height from left subtree
    int leftH = GetDiameter(root->left,diameter);
    // get the height from right subtree
    int rightH = GetDiameter(root->right,diameter);

    // update the diameter
    diameter = max(diameter,leftH+rightH);

    // return the height
    return 1+max(leftH,rightH);
}

int diameterOfBinaryTree(TreeNode<int>* root){
    int diameter = 0;
    GetDiameter(root,diameter);
    return diameter;
}