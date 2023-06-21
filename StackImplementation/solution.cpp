class Stack{
    public:
    int* arr;
    int head;
    int max_size;

    Stack(int capacity){
        arr = new int[capacity];
        head=-1;
        max_size=capacity;
    }

    void push(int num){
        if(isFull()==0){
            head++;
            arr[head]=num;
        }
    }

    int pop(){
        if(isEmpty()==0){
            int topEle = top();
            head--;
            return topEle;
        }
        return -1;
    }

    int top(){
        return (isEmpty()? -1 : arr[head]);
    }

    int isEmpty(){
        return (head==-1 ? 1 : 0);
    }

    int isFull(){
        return (head==max_size ? 1 : 0);
    }
};