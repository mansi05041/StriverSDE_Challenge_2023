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

// This solution is using the approach of counting total nodes

int totalNodes(Node* head){
    int count=0;
    while (head)
    {
        count++;
        head=head->next;
    }
    return count;
}

Node* diff(Node* head,int n){
    while(n){
        head=head->next;
        n--;
    }
    return head;
}

Node* findIntersection(Node* firstHead, Node* secondHead){
    int n1 = totalNodes(firstHead);
    int n2 = totalNodes(secondHead);

    if(n1>n2) firstHead = diff(firstHead,n1-n2);
    else seconsHead = diff(secondHead,n2-n1);

    while(firstHead && secondHead){
        if(firstHead==secondHead) return firstHead;
        firstHead=firstHead->next;
        secondHead=secondHead->next;
    }
    return NULL;
}