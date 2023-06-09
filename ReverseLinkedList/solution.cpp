/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head){
    if(!head || head->next) return head;
    LinkedListNode<int> *curr=head;
    LinkedListNode<int> *prev=NULL;
    LinkedListNode<int> *nextPtr;
    while(curr){
        nextPtr= curr->next;
        curr->next= prev;
        prev=curr;
        curr= nextPtr;
    }
    return prev;
}