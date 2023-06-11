/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

int totalNodes(Node* head){
    int count =1;
    while(head->next){
        count++;
        head=head->next;
    }
    return count;
}

Node *rotate(Node* head,int k){
    if(k==0 || !head) return head; // no rotation is needed
    Node* curr=head;

    // find the (k)th node from the end
    int n = totalNodes(head);
    k = k%n; // update the value

    if(k==0) return head;

    int steps = n-k;

    // find the steps th node from the beginning
    for(int i=1;i<steps;i++){
        curr=curr->next;
    }

    Node* ptr = curr->next;
    curr->next = NULL;

    curr = ptr;
    // find the end of linked list
    while(curr->next){
        curr=curr->next;
    }
    
    curr->next = head;
    return ptr; // new head of rotated linked list
}