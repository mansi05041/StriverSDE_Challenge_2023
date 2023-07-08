/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int getMaxWidth(TreeNode<int>* root){
    if(!root) return 0;

    queue<TreeNode<int>*> q;
    int width = 0;

    // push the root into queue
    q.push(root);

    while(!q.empty()){
        int Qsize = q.size();
        // update the width
        width = max(width,Qsize);

        while(Qsize--){
            // remove the front node of the queue
            auto node = q.front();
            q.pop();

            // if the left root exists
            if(node->left) q.push(node->left);

            // if the right root exists
            if(node->right) q.push(node->right);
        }
    }
    
    return width;
}