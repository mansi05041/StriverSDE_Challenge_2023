#include<stack>
class Queue{

    public:
    stack<int> st1,st2;

    // st1 -> act as end of queue
    // st2 -> act as front of queue

    Queue(){}

    void enQueue(int val){
        // always push the element from the end of queue
        st1.push(val);
    }

    int deQueue(){
        // always remove the element from the front of queue
        int res = peek(); // get the element at front
        if(res==-1) return -1; // nothing to pop 
        st2.pop();
        return res;
    }

    int peek(){
        if(isEmpty()) return -1;
        if(st2.empty()){
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
        }
        return st2.top();
    }

    bool isEmpty(){
        return(st1.empty() && st2.empty());
    }
};