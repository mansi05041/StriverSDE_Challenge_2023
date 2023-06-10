/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };

*****************************************************************/

// by detecting the loop approach

Node* findIntersection(Node* firstHead, Node* secondHead){
    // base case
    if(!firstHead || !secondHead) return NULL;

    // connect firstHead with end to have a loop
    Node* slow = firstHead;
    while(slow->next) slow=slow->next;
    slow->next = firstHead;

    // detect the loop
    Node* fast = secondHead;
    slow = secondHead;
    while (fast && fast->next)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast) break;
    }

    // find the intersection
    if(slow==fast){
        slow = secondHead;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
    return NULL;
}