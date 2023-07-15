/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

    class TreeNode{
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        ~TreeNode() {
            if (left){
                delete left;
            }
            if (right){
                delete right;
            }
        }
    };

*************************************************************/

TreeNode<int>* buildTree(vector<int>& arr,int& i,int bound){
    // base case
    if(arr.size()==i || arr[i]>bound) return NULL;

    // create the node
    TreeNode<int>* root = new TreeNode<int>(arr[i++]);

    // recursively call the function to build left subtree
    root->left = buildTree(arr,i,root->data);
    // recursively call the function to build right subtree
    root->right = buildTree(arr,i,bound);

    return root;
}

TreeNode<int>* preOrderTree(vector<int>& preOrder){
    int i = 0;
    return buildTree(preOrder,i,INT_MAX);
}