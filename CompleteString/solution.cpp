class Node{
    public:

    Node* links[26];
    bool flag;

    // constructor
    Node(){
        flag = false;
        for(int i=0;i<26;i++){
            links[i]=NULL;
        }
    }

    // check if the node is not NULL
    bool ContainsKey(char ch){
        return links[ch-'a']!=NULL;
    }

    // put the character 
    void put(char ch,Node* node){
        links[ch-'a']=node;
    }

    // get the reference of next node
    Node* get(char ch){
        return links[ch-'a'];
    }

    // set the flag true
    void setEnd(){
        flag = true;
    }
};

class Trie{

    public:
    Node* root;

    // constructor
    Trie(){
        root = new Node();
    }

    // insert the new word into trie
    void insert(string& word){
        Node* node = root;
        for(int i=0;i<word.size();i++){
            // check if the word is already not there
            if(!node->ContainsKey(word[i])){
                // create a new node and put the word
                node->put(word[i],new Node());
            }
            // move to the next reference
            node = node->get(word[i]);
        }
        // set the flag true
        node->setEnd();
    }

    // check if the prefix exists
    bool checkIfPrefixExists(string& word){
        Node* node = root;
        bool flag = true;
        for(int i=0;i<word.size();i++){
            // check if the word is present there
            if(node->ContainsKey(word[i])){
                // move to the next reference
                node = node->get(word[i]);
                // update the flag
                flag = flag & node->flag;
            }
            else return false;
        }
        return flag;
    }
};

string completeString(int n, vector<string>& a){
    Trie* trie = new Trie();
    // insert every word into the trie
    for(auto& it: a){
        trie->insert(it);
    }
    // get the longest prefix 
    string longest = "";
    for(auto& it: a){
        if(trie->checkIfPrefixExists(it)){
            if(longest.size()<it.size()) longest = it;
            else if(longest.size()==it.size() && longest>it) longest = it;
        }
    }

    return longest=="" ? "None":longest;
}