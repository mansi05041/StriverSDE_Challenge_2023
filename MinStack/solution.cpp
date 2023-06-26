class minStack{
    public:
    stack<pair<int,int>> s;

    // constructor
    minStack(){}

    // function to push the element into the stack
    void push(int num){
        // if the stack is empty
        if(s.empty()) s.push({num,num});
        // if the min element present in the stack is also smaller than current element
        else if(s.top().second<num) s.push({num,s.top().second});
        // otherwise the current element is considered as minimum
        else s.push({num,num});
    }

    // function to pop the top element from the stack
    int pop(){
        if(s.empty()) return -1;
        auto t = s.top();
        s.pop();
        return t.first;
    }

    // function to return the top element of the stack
    int top(){
        return s.empty() ? -1 : s.top().first;
    }

    // function to return the minimum element of stack
    int getMin(){
        return s.empty() ? -1 : s.top().second;
    }

};