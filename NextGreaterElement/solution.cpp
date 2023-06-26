vector<int> nextGreater(vector<int>& arr, int n){
    stack<int> st;
    vector<int> res(n,-1);
    st.push(n-1);

    for(int i=n-1;i>=0;i--){
        // remove all the elements from the stack if the current element is greater and equal to the element at the top of stack
        while (!st.empty() && ar[st.top()]<=arr[i])
        {
            st.pop();
        }
        if(!st.empty()) res[i]=arr[st.top()];
        st.push(i);
    }
    return res;
}