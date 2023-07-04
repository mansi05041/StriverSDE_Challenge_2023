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

void leftViewRecursive(TreeNode<int>* root,vector<int>& leftView,int& maxLevel,int level){
    // base case
    if(!root) return;
    // check if the current level is greater than the maxLevel
    if(level>maxLevel){
        leftView.push_back(root->data);
        // update the maxlevel
        maxLevel = level;
    }

    // call the function recursively for the left subtree
    leftViewRecursive(root->left,leftView,maxLevel,level+1);
    // call the function recursively for the right subtree
    leftViewRecursive(root->right,leftView,maxLevel,level+1);
}

vector<int> getLeftView(TreeNode<int>* root){
    vector<int> leftView;
    int maxLevel = 0;
    leftViewRecursive(root,leftView,maxLevel,1);
    return leftView;
}