/************************************************************

    Following is the Binary Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/

class Node{
    public:
    int size;
    int maxNode;
    int minNode;

    Node(int s,int min_,int max_){
        size = s;
        maxNode = max_;
        minNode = min_;
    }
};

Node helper(TreeNode<int>* root){
    // base case
    if(!root) return Node(0,INT_MAX,INT_MIN);

    // move to the left subtree
    auto left = helper(root->left);
    // move to the right subtree
    auto right = helper(root->right);

    if(left.maxNode < root->data && root->data < right.minNode){
        // found a BST
        return Node(1+left.size+right.size,min(left.min,root->data),max(right.max,root->data));
    }

    return Node(max(left.size,right.size),INT_MIN,INT_MAX);
}

int largestBST(TreeNode<int>* root){
    return helper(root).size;
}