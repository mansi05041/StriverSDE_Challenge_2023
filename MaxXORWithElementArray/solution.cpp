class Node{
    public:
    Node* one;
    Node* zero;

    Node(){
        one = nullptr;
        zero = nullptr;
    }
};

class Trie{
    public:
    Node* root;

    Trie(){
        root = new Node();
    }

    // insert the number
    void insert(int n){
        Node* curr = root;
        for(int i=31;i>=0;i--){
            int bit = (n>>i) & 1;
            if(bit==0){
                if(!curr->zero) curr->zero = new Node();
                curr = curr-> zero;
            }
            else{
                if(!curr->one) curr->one = new Node();
                curr = curr->one;
            }
        }
    }

    // find the max XOR
    int findMaxXor(int n){
        Node* curr = root;
        int ans = 0;
        for(int i=31;i>=0;i--){
            int bit = (n>>i) & 1;
            if(bit==0){
                // find 1
                if(curr->one){
                    ans = ans | (1<<i);
                    curr = curr->one;
                }
                else curr = curr->zero;
            }
            else{
                // find 0
                if(curr->zero){
                    ans = ans | (1<<i);
                    curr = curr->zero;
                }
                else curr = curr->one;
            }
        }
        return ans;
    }
};

vector<int> maxXorQueries(vector<int>& arr,vector<vector<int>>& queries){

    // sort the array
    sort(arr.begin(),arr.end());

    vector<pair<int,pair<int,int>>> q;
    for(auto &it: queries){
        q.push_back({it[1],{it[0],i++}});
    }

    // sort the querries
    sort(q.begin(),q.end());

    vector<int> res(queries.size(),0);

    int idx = 0;
    Trie trie;
    int n = arr.size();

    for(auto &it: q){
        int ai = it.first;
        int xi = it.second.first;
        int qi = it.second.second;

        while(idx<n && arr[idx]<=ai){
            trie.insert(arr[idx]);
            idx++;
        }

        if(idx==0) res[qi] = -1;
        else res[qi] = trie.findMaxXor(xi);
    }

    return res;
}