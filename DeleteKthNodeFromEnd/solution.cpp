/*
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
*/

Node* removeKthNode(Node* head,int k){

    // track the head of modified list
    Node* dummy= new Node(-1);
    Node* fast= dummy;
    Node* slow= dummy;

    // move fast to k steps forward
    for(int i=1;i<=k;i++) fast=fast->next;

    // find the K+1 th node from end
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next;
    }

    // remove the kth node from end
    slow->next = slow->next->next;

    return dummy->next;
}