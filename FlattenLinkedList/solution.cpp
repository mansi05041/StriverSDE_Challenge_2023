/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */

Node* mergeLinkedList(Node* head1, Node* head2){
    if(!head1) return head2;
    if(!head2) return head1;

    Node* dummy = new Node(-1);
    Node* head = dummy;

    while (head1 && head2)
    {
        if(head1->data<head2->data){
            dummy->child = head1;
            head1=head1->child;
        }
        else{
            dummy->child = head2;
            head2=head2->child;
        }
        dummy = dummy->child;
    }

    // copy the remaining nodes
    if(head1) dummy->child = head1;
    if(head2) dummy->child = head2;

    return head->child;
}

Node* flattenLinkedList(Node* head){
    if(!head->next) return head;
    Node* down = head;
    Node* right = head->next;
    down->next = NULL;
    Node* downF = flattenLinkedList(down);
    Node* rightF = flattenLinkedList(right);
    return mergeLinkedList(downF,rightF);
}