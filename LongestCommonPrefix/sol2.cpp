class Node{
    public:
    Node* links[26];
    int childCount;
    bool end;

    // constructor
    Node(){
        childCount=0;
        for(int i=0;i<26;i++){
            links[i]=NULL;
        }
        end = false;
    }

    // contains the key
    bool ContainsKey(char ch){
        return links[ch-'a']!=NULL;
    }

    // give the reference node
    Node* get(char ch){
        return links[ch-'a'];
    }

    // put the character into trie
    void put(char ch,Node* node){
        links[ch-'a']=node;
    }

    // increment the word count
    void incrementChildCount(){
        childCount++;
    }

    void setEnd(){
        end = true;
    }
};

class Trie{
    public:
    Node* root;

    // constructor
    Trie(){
        root = new Node();
    }

    // insert the string into character
    void insert(string& word){
        Node* node = root;
        for(int i=0;i<word.size();i++){
            // check if it is not already present in the trie
            if(!node->ContainsKey(word[i])){
                // put it into trie
                node->put(word[i], new Node());
                node->incrementChildCount();
            }
            // move to the next reference
            node=node->get(word[i]);
        }
        node->setEnd();
    }

    void getPrefix(string str,string& ans){
        Node* node = root;
        for(int i=0;i<str.size();i++){
            if(node->childCount==1){
                ans+=str[i];
                // get next node reference
                node = node->get(str[i]);
            }
            else{
                break;
            }

            if(node->end) break;
        }
    }
};
string longestCommonPrefix(vector<string> &arr, int n)
{
    // Write your code here
    Trie* trie = new Trie();

    // insert all the string into trie
    for(auto it: arr){
        trie->insert(it);
    }

    // find the longest common prefix
    string first = arr[0];
    string ans = "";
    trie->getPrefix(first, ans);

    return ans;
}


