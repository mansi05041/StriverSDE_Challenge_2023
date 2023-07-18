/************************************************************

    Following is the TreeNode class structure:

    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        
        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

************************************************************/
int findCeil(BinaryTreeNode<int>* root, int x){
    int ans = -1;
    while(root){
        // if the root has same value as x
        if(root->data == x){
            ans = root->data;
            break;
        }
        // the root data is greater than x
        else if(root->data>x){
            ans = root->data;
            root = root->left;
        }
        // the root data is less than x
        else{
            root = root->right;
        }
    }
    return ans;
}