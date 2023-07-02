/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> getLevelOrder(BinaryTreeNode<int> *root){
    if(!root) return {};

    queue<BinaryTreeNode<int>*> q;
    vector<int> level;

    q.push(root);

    while(!q.empty()){
        auto temp = q.front();
        q.pop();
        level.push_back(temp->val);
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
    return level;
}