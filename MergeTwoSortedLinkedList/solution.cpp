/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second){

    // base case
    if(!first) return second;
    if(!second) return first;

    Node<int>* head=NULL;
    Node<int>* tail=NULL;

    // set the first node
    if(first->data<second->data){
        head=tail=first;
        first=first->next;
    }
    else{
        head=tail=second;
        second=second->next;
    }

    while(first && second){
        if(first->data<second->data){
            tail->next=first;
            first=first->next;
        }
        else{
            tail->next=second;
            second=second->next;
        }
        tail =tail->next;
    }

    // copy the remaining elements
    if(first) tail->next=first;
    if(second) tail->next=second;

    return head;
}