class Node{
    public:
    Node* one;
    Node* zero;

    Node(){
        one = NULL;
        zero = NULL;
    }
};

class TrieNode{
    public:
    Node* root;

    TrieNode(){
        root = new Node();
    }

    void insert(int n){
        Node* curr = root;
        for(int i=31;i>=0;i--){
            int bit = (n>>i) & 1;
            if(bit==0){
                if(!curr->zero){
                    curr->zero = new Node();
                }
                curr = curr->zero;
            }
            else{
                if(!curr->one){
                    curr->one = new Node();
                }
                curr = curr->one;
            }
        }
    }

    int findMaxXOR(int n){
        Node* curr = root;
        int ans = 0;
        for(int i=31;i>=0;i--){
            int bit = (n>>i) & 1;
            if(bit==1){
                if(curr->zero){
                    ans+=(1<<i);
                    curr = curr->zero;
                }
                else{
                    curr = curr->one;
                }
            }
            else{
                if(curr->one){
                    ans+=(1<<i);
                    curr = curr->one;
                }
                else{
                    curr = curr->zero;
                }
            }
        }
        return ans;
    }
};

int maximumXor(vector<int> A){
    TrieNode* trie = new TrieNode();
    int maxXor = 0;

    // insert every number into trie
    for(auto it: A) trie->insert(it);

    // find the maximum XOR
    for(auto it: A) maxXor = max(maxXor,trie->findMaxXOR(it));

    return maxXor;
}