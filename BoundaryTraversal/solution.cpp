/************************************************************

    Following is the Binary Tree node structure:
    
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
bool isLeaf(TreeNode<int>* node){
    return (!node->left && !node->right);
}

void traverseLeft(TreeNode<int>* root,vector<int>& res){
    TreeNode<int>* curr = root;
    while(curr){
        if(!isLeaf(curr)) res.push_back(curr->data);
        // traverse to left
        if(curr->left) curr = curr->left;
        // otherwise to right
        else curr = curr->right;
    }
}

void traverseLeaves(TreeNode<int>* root,vector<int>& res){
    if(!root) return;
    if(isLeaf(root)) res.push_back(root->data);
    traverseLeaves(root->left,res);
    traverseLeaves(root->right,res);
}

void traverseRight(TreeNode<int>* root,vector<int>& res){
    TreeNode<int>* curr = root;
    vector<int> temp;
    while(curr){
        if(!isLeaf(curr)) temp.push_back(curr->data);
        // traverse to right
        if(curr->right) curr = curr->right;
        // otherwise to left
        else curr = curr->left;
    }
    for(int i=temp.size()-1;i>=0;i--) res.push_back(temp[i]);
}

vector<int> traverseBoundary(TreeNode<int>* root){
    // edge case
    if(!root) return {};
    // single node
    if(isLeaf(root)) return{root->data};

    vector<int> res;
    res.push_back(root->data);

    // traverse to left boundary
    traverseLeft(root->left,res);
    // traverse to leaves
    traverseLeaves(root,res);
    // traverse to right 
    traverseRight(root->right,res);

    return res;
}