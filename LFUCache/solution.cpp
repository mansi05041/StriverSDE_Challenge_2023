class Node{
    public:

    int key;
    int value;
    int count;
    Node* prev;
    Node* next;
    
    Node(int key,int value){
        this->key = key;
        this->value = value;
        count = 1;
    }
};

class LinkedList{
    public:

    Node* head;
    Node* tail;
    int size;

    LinkedList(){
        head = new Node(-1,-1);
        tail = new Node(-1,-1);
        head->next = tail;
        tail->prev = head;
        size = 0;
    }

    // add the node in the front of cache
    void addNode(Node* newNode){
        newNode->prev = head;
        newNode->next = head->next;
        head->next->prev = newNode;
        head->next = newNode;
        size++;
    }

    // remove the node from the end of the cache
    void removeNode(Node* delNode){
        delNode->next->prev = delNode->prev;
        delNode->prev->next = delNode->next;
        size--;
    }
};

class LFUCache{
    public:
    unordered_map<int,Node*> keyNode;
    unordered_map<int,LinkedList*> freqNode;
    int maxCacheSize;
    int currentSize;
    int minFreq;

    LFUCache(int capacity){
        maxCacheSize = capacity;
        currentSize = 0;
        minFreq = 0;
    }

    int get(int key){
        // check if it is present in the map
        if(keyNode.count(key)){
            auto Tnode = keyNode[key];
            int value = Tnode->value;
            updateLinkedList(Tnode);
            return value;
        }
        return -1;
    }

    int put(int key,int value){
        
        // base case
        if(maxCacheSize==0) return;

        // if the key-value already preesnt in the map
        if(keyNode.count(key)){
            auto Tnode = keyNode[key];
            Tnode->value = value;
            updatedLinkedList(Tnode);
        }
        else{
            // if the max size of cache exceeds
            if(maxCacheSize == currentSize){
                // required to remove the least frequency
                LinkedList* list = freqNode[minFreq];
                // handle the tie case if multiple nodes are there
                // then remove the node from the end
                keyNode.erase(list->tail->prev->key);
                list->removeNode(list->tail->prev);
                currentSize--;
            }

            // add the given node in the cache 
            currentSize++;
            minFreq = 1; // new node is added
            LinkedList* list = new LinkedList();
            // find if the minfreq linked list already exists
            if(freqNode.count(minFreq)){
                list = freqNode[minFreq];
            }
            // add the node at the end of the linked list
            Node* newNode = new Node(key,value);
            list->addNode(newNode);
            // update the maps
            keyNode[key]=newNode;
            freqNode[minFreq]=list;
        }
    }

    void updateLinkedList(Node* qnode){
        // remove the node from the maps
        keyNode.erase(qnode->key);
        freqNode[qnode->count]->removeNode(qnode);

        // update the minimum frequency: if the previous one has no nodes
        if(freqNode[qnode->count]->size == 0 && qnode->count==minFreq) minFreq++;

        // next higher linked list will be create 
        LinkedList* nextHigherList = new LinkedList();
        // find if it already exists
        if(freqNode.find(qnode->count+1)!=freqNode.end()){
            nextHigherList = freqNode[qnode->count];
        }

        // update the frequency of the node
        qnode->count+=1;

        // add the node at the front of the linked list
        nextHigherList->addNode(qnode);
        // update the map 
        freqNode[qnode->count]=nextHigherList;
        keyNode[qnode->key]=qnode;
    }

};