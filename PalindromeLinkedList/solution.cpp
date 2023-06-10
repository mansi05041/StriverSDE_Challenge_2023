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

LinkedListNode<int>* FindMiddleNode(LinkedListNode<int>* head){
    LinkedListNode<int>* slow = head;
    LinkedListNode<int>* fast = head;

    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

LinkedListNode<int>* Reverse(LinkedListNode<int> *head){
    LinkedListNode<int>* curr = head;
    LinkedListNode<int>* prev = NULL;
    LinkedListNode<int>* nextPtr;

    while (curr)
    {
        nextPtr=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextPtr;
    }
    return prev;
}

bool isPalindrome(LinkedListNode<int>* head){

    // base case
    if(!head || !head->next) return true;

    // find the middle node
    LinkedListNode<int>* mid = FindMiddleNode(head);
    LinkedListNode<int>* slow = mid;

    // reverse thee half linked list
    slow = Reverse(slow);

    // compare the both ends 
    LinkedListNode<int>* fast = head;
    while(fast!=mid->next && slow!=mid->next){
        if(slow->data!=fast->data) return false;
        slow=slow->next;
        fast=fast->next;
    }
    return true;
}