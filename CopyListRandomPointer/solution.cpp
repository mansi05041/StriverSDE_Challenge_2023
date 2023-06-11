
/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head){
    // base case
    if(!head) return NULL;

    LinkedListNode<int> *curr = head;
    LinkedListNodE<int> *nextPtr = NULL;

    // attach the duplicate node after every node
    while(curr){
        nextPtr = curr->next;
        LinkedListNode<int> *newNode = new LinkedListNode<int>(curr->data);
        curr->next = newNode;
        curr->next->next = nextPtr;
        curr = nextPtr;
    }

    // set the random pointers
    curr = head;
    while(curr){
        if(curr->next){
            curr->next->random = curr->random ? curr->random->next : curr->random;
        }
        curr = curr->next ? curr->next->next : curr->next;
    }

    // segerate the lists
    curr=head;
    LinkedListNode<int>* clone = head->next;
    nextPtr = clone; // head of the copy linked list
    while(curr && clone){
        curr->next = curr->next ? curr->next->next : curr->next;
        clone->next = clone->next ? clone->next->next : clone->next;
        curr = curr->next;
        clone = clone->next;
    }
    return nextPtr;
}