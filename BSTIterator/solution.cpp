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

class BSTiterator{
    public:
    stack<TreeNode<int>*> st;

    BSTiterator(TreeNode<int>* root){
        pushAll(root);
    }

    int next(){
        auto node = st.top();
        st.pop();
        pushAll(node->right);
        return node->data;
    }

    bool hasNext(){
        return !st.empty();
    }

    void pushAll(TreeNode<int>* root){
        while (root)
        {
            st.push(root);
            root = root->left;
        }
    }
};

/*
    Your BSTIterator object will be instantiated and called as such:
    BSTIterator iterator(root);
    while(iterator.hasNext())
    {
       print(iterator.next());
    }
*/