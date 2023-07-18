/************************************************************

    Following is the Binary Tree node structure:

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


************************************************************/
void getPreorder(BinaryTreeNode<int>* root,vector<int>& t){
    // root left right
    if(!root) return;
    t.push_back(root->data);
    getPreorder(root->left,t);
    getPreorder(root->right,t);
}

void getPostorder(BinaryTreeNode<int>* root,vector<int>& t){
    // left right root
    if(!root) return;
    getPostorder(root->left,t);
    getPostorder(root->right,t);
    t.push_back(root->data);
}

void getInorder(BinaryTreeNode<int>* root,vector<int>& t){
    // left root right
    if(!root) return;
    getInorder(root->left,t);
    t.push_back(root->data);
    getInorder(root->right,t);
}

vector<vector<int>> getTreeTraversal(BinaryTreeNode<int>* root){

    vector<int> preorder;
    vector<int> postorder;
    vector<int> inorder;

    getPreorder(root,preorder);
    getPostorder(root,postorder);
    getInorder(root,inorder);

    res.push_back(inorder);
    res.push_back(preorder);
    res.push_back(postorder);

    return res;

}