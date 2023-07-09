/*************************************************************

    Following is the Binary Tree node structure

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

*************************************************************/

vector<int> zigZagTraversal(BinaryTreeNode<int>* root){
    if(!root) return vector<int>();

    vector<int> res;
    bool isOdd = true; // initially we start with odd level
    queue<BinaryTreeNode<int>*> q;

    // push the root
    q.push(root);

    while(!q.empty()){
        int qSize = q.size();
        vector<int> temp;

        while(qSize--){
            auto node = q.front();
            q.pop();
            temp.push_back(node->data);

            // if left child exists
            if(node->left) q.push(node->left);
            // if right child exists
            if(node->right) q.push(node->right);
        }

        // if the level is even then reverse it
        if(!isOdd) reverse(temp.begin(),temp.end());

        // add the temp values into res
        for(auto it: temp) res.push_back(it);

        // flip isOdd value
        isOdd = !isOdd;
    }
    return res;
}