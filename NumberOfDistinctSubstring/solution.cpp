class Node{
    public:
    Node* links[26];

    // constructor
    Node(){
        for(int i=0;i<26;i++) links[i]=NULL;
    }

    // check if the node is not NULL
    bool ContainsKey(char ch){
        return links[ch-'a']!=NULL;
    }

    // put the character into the node
    void put(char ch,Node* node){
        links[ch-'a'] = node;
    }

    // get the next reference
    Node* get(char ch){
        return links[ch-'a'];
    }
};

Class Trie{
    public:
    Node* root;

    Trie(){
        root = new Node();
    }

    int distinctStrings(string& word){
        int count =0;
        for(int i=0;i<word.size();i++){
            Node* node = root;
            for(int j=i;j<word.size();j++){
                // check if it is already not present in the trie
                if(!node->ContainsKey(word[j])){
                    // put that in the trie
                    node->put(word[j],new Node());
                    count++;
                }
                // move to the next reference
                node = node->get(word[j]);
            }
        }
        return count;
    }
};

int distinctSubstring(string& word){
    Trie* trie = new Trie();
    return trie->distinctStrings(word);
}