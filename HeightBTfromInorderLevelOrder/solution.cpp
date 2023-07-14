class Node{
    public:
    int height;
    int leftIdx;
    int rightIdx;

    Node(int h,int l,int r){
        height = h;
        leftIdx = l;
        rightIdx = r;
    }
};

int heightOfTheTree(vector<int>& inorder,vector<int>& levelOrder,int N){
    if(N==0) return 0;
    queue<Node*> q;

    // pudh the root
    Node* root = new Node(0,0,N-1);
    q.push(root);

    // store the inorder sequence in map
    unordered_map<int,int> mp;
    for(int i=0;i<N;i++){
        mp[inorder[i]] = i;
    }

    // track the maximum height of binary tree
    int maxHeight = 0;

    for(int i=0;i<N;i++){
        // extract the front node
        auto li = q.front()->leftIdx;
        auto ri = q.front()->rightIdx;
        auto h = q.front()->height;
        q.pop();

        // update the maximum height
        maxHeight = max(maxHeight,h);

        // find the index of the node in inorder sequence
        int idx = mp[levelOrder[i]];

        // push the left subtree into queue if exists
        if(idx-1>=li){
            Node* left = new Node(h+1,li,idx-1);
            q.push(left);
        }

        // push the right subtree into queue if exists
        if(idx+1<=ri){
            Node* right = new Node(h+1,idx+1,ri);
            q.push(right);
        }
    }

    return maxHeight;
}