class Stack{
    public:
    queue<int>* q;

    Stack(){
        q = new queue<int>;
    }

    int getSize(){
        return q->size();
    }

    bool isEmpty(){
        return q->empty();
    }

    void push(int element){
        int size = getSize();
        q->push(element);
        while (size>0)
        {
            q->push(top());
            q->pop();
            --size;
        }
    }

    int pop(){
        int res = top();
        if(top()==-1) return -1;
        q->pop();
        return res;
    }

    int top(){
        return isEmpty()? -1 : q->front();
    }

};