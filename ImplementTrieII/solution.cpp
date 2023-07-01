class Node{
    public:
    Node* links[26];
    int end;
    int prefixCount;

    Node(){
        end = 0;
        prefixCount = 0;
    }

    // checks if the key is present
    bool ContainsKey(char ch){
        return (links[ch-'a']!=NULL);
    }

    // put the value
    void put(char ch,Node* node){
        links[ch-'a']=node;
    }

    // get the word
    Node* get(char ch){
        return links[ch-'a'];
    }

    // increment the end
    void incrementEnd(){
        end++;
    }

    // increment the prefix count
    void incrementPrefix(){
        prefixCount++;
    }

    // decrement the end
    void decrementEnd(){
        end--;
    }

    // decrement the prefix count
    void decrementPrefix(){
        prefixCount--;
    }
};

class Trie{
    public:
    Node* root;
    Trie(){
        root = new Node();
    }

    void insert(string& word){
        Node* node = root;
        for(int i=0;i<word.size();i++){
            // find the key
            if(!node->ContainsKey(word[i])){
                // not found then put the key
                node->put(word[i],new Node());
            }
            // move the next reference
            node = node->get(word[i]);
            // increment the prefix count
            node->incrementPrefix();
        }
        // increment the end
        node->incrementEnd();
    }

    int countWordsEqualTo(string& word){
        Node* node = root;
        for(int i=0;i<word.size();i++){
            // find the key
            if(!node->ContainsKey(word[i])) return 0;
            // move the reference to the next position
            node = node->get(word[i]);
        }
        return node->end;
    }

    int countWordStartingWith(string& word){
        Node* node = root;
        for(int i=0;i<word.size();i++){
            // find the key
            if(!node->ContainsKey(word[i])) return 0;
            // move the reference to next position
            node = node->get(word[i]);
        }
        return node->prefixCount;
    }

    void erase(string& word){
        Node* node = root;
        for(int i=0;i<word.size();i++){
            if(!node->ContainsKey(word[i])) return;
            node = node->get(word[i]);
            node->decrementPrefix();
        }
        node->decrementEnd();
    }
};