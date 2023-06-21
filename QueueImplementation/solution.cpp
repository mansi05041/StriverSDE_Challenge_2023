class Queue{
    public:
    int *q;
    int head;
    int tail;
    int size;
    int capacity;

    Queue(){
        capacity = 10001;
        size = 0;
        head = 0;
        tail = capacity-1;
        q = new int[capacity];
    }

    bool isEmpty(){
        return (size==0);
    }

    void enqueue(int data){
        if(size==capacity) return;
        tail = (tail+1)%capacity;
        q[tail]=data;
        size=size+1;
    }

    int dequeue(){
        if(isEmpty()) return -1;
        int temp = q[head];
        head = (head+1)%capacity;
        size--;
        return temp;
    }

    int front(){
        return (isEmpty() ? -1 : q[head]);
    }
};