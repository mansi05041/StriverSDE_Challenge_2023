/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node* addTwoNumbers(Node* num1, Node* num2){

    int carry=0;
    int ans=0;
    Node* head=NULL;
    Node* prev=NULL;

    while(num1 || num2 || carry){
        int val1=0;
        int val2=0;

        if(num1){
            val1=num1->data;
            num1=num1->next;
        }
        if(num2){
            val2=num2->data;
            num2=num2->next;
        }

        // calculate the ans
        ans=val1+val2+carry;
        // update the carry and ans
        carry = ans/10;
        ans = ans%10;

        // create a new node
        Node* newNode = new Node(ans);
        if(!head) head=newNode;
        else prev->next= newNode;
        prev = newNode;
    }
    return head;
}