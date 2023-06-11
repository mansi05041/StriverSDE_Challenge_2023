/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node* reverse(Node* head,int b[],int idx,int n){
    // base case
    if(!head || !head->next || n<1) return head;

    // reverse the group 
    Node* curr = head;
    Node* nextPtr = NULL;
    Node* prev = NULL;
    int count =0;

    // find the non-zero group size
    while(b[idx]==0 && idx<n) idx++;

    while(curr && count<b[idx] && idx<n){
        nextPtr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextPtr;
        count++;
    }

    if(idx>=n && curr) return head;

    if(curr) head->next = reverse(nextPtr,b,idx+1,n);

    return prev;
}

Node* getListAfterReverseOperation(Node* head, int n, int b[]){
    if(head==NULL) return NULL;

    return reverse(head,b,0,n);
}