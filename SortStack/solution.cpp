void sortStack(stack<int>& st){
    // base case : if the stack is empty
    if(st.empty()) return;

    // remove the top element of the stack
    int x = st.top();
    st.pop();

    // sort the remaining elements in the stack
    sortStack(st);

    // create a temporary stack
    stack<int> temp;

    // move all the elements than x into the temporary stack
    while(!st.empty() && st.top()>x){
        temp.push(st.top());
        st.pop();
    }

    // push x back into the main stack
    st.push(x);

    // move all the elements from temp to original stack
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
}