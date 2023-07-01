class Node{
    public:
    Node* links[26];
    bool flag;

    Node(){
        flag = false;
    }

    // function to check if the key is already present 
    bool ContainsKey(char ch){
        return links[ch-'a']!=NULL;
    }

    // function to put the key into the reference
    void put(char ch,Node* node){
        links[ch-'a']=node;
    }

    // function to get the key
    Node* get(char ch){
        return links[ch-'a'];
    }

    // set the flag true
    bool setEnd(){
        return flag = true;
    }
};

class Trie{
    public:

    Node* root;
    Trie(){
        root = new Node();
    }

    /* Inserts a word into the trie */
    void insert(string word){
        Node* node = root;
        for(int i=0;i<word.size();i++){
            // check if it is already present
            if(!node->ContainsKey(word[i])){
                // the key is not present then put the key into trie
                node->put(word[i],new Node());
            }
            // move to the next reference
            node = node->get(word[i]);
        }
        // set the last reference flag true
        node->setEnd();
    }

    /* Returns if the word is in the trie */
    bool search(string word){
        Node* node = root;
        for(int i=0;i<word.size();i++){
            // check if it is not present
            if(!node->ContainsKey(word[i])) return false;
            // move to next reference
            node = node->get(word[i]);
        }
        return node->flag;
    }

    /* Returns if there is any word in the trie that starts with the given prefix*/
    bool startsWith(string prefix){
        Node* node = root;
        for(int i=0;i<prefix.size();i++){
            // check if it is not present
            if(!node->ContainsKey(prefix[i])) return false;
            node = node->get(prefix[i]);
        } 
        return true;
    }
};