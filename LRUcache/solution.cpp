class LRUCache{

    class Node{
        public:

        // data members
        int key;
        int value;
        Node* prev;
        Node* next;

        // constructor 
        Node(int value,int key){
            this->value=value;
            this->key=key;
        }
    };

    Node* Head = new Node(-1,-1);
    Node* Tail = new Node(-1,-1);
    int size;
    unordered_map<int,Node*> mp;

    public:
    LRUCache(int capacity){
        size = capacity;
        Head->next=Tail;
        Tail->prev=Head;
    }

    // function to add node in the front of cache
    void addNode(Node* newNode){
        newNode->prev=Head;
        newNode->next=Head->next;
        Head->next->prev=newNode;
        Head->next=newNode;
    }

    // function to delete the node from the end of cache
    void delNode(Node* removeNode){
        removeNode->prev->next=removeNode->next;
        removeNode->next->prev=removeNode->prev;
        removeNode->next=NULL;
        removeNode->prev=NULL;
        delete removeNode;
    }

    // function to get the value at given key
    int get(int key){
        // check if it is present in the map
        if(mp.find(key)!=mp.end()){
            int value = mp[key]->value;
            delNode(mp[key]);
            mp.erase(key);
            addNode(new Node(value,key));
            mp[key]=Head->next;
            return value;
        }
        return -1;
    }

    // function to put the value in the cache
    void put(int key, int value){
        // check if it is present in the map
        if(mp.find(key)!=mp.end()){
            delNode(mp[key]);
            mp.erase(key);
        }
        // exceeds the size
        if(size==mp.size()){
            mp.erase(Tail->prev->key);
            delNode(Tail->prev);
        }
        addNode(new Node(value,key));
        mp[key]=Head->next;
    }
};