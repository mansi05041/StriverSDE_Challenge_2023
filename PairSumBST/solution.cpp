/**********************************************************

    Following is the Binary Tree Node structure:

    template <typename T>
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
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };
***********************************************************/
bool pairSumBst(BinaryTreeNode<int>* root, int k){
    queue<BinaryTreeNode<int>*> q;
    unordered_map<int,int> mp;

    q.push(root);

    while(!q.empty()){
        // removed the front node from queue
        auto node = q.front();
        q.pop();

        mp[node->data]++;

        if(mp.find(k-node->data)!=mp.end()) return true;

        // push the left child
        if(node->left) q.push(node->left);
        // push the right child
        if(node->right) q.push(node->right);
    }
    return false;
}