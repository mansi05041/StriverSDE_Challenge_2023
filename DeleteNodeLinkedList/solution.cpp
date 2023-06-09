
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

void deleteNode(LinkedListNode<int> *node){
    // store the value of next node into the given node
    node->data = node->next->data;
    // store the next node into temp
    LinkedListNode<int> *temp = node->next;
    // remove the connection wih temp
    node->next = temp->next;

    delete temp;
}