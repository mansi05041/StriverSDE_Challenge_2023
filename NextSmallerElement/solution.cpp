vector<int> nextSmallerElement(vector<int>& arr,int n){
    stack<int> st;
    vector<int> res(n,-1);

    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]>arr[i]){
            // found the next smaller element
            res[st.top()]=arr[i];
            st.pop();
        }
        st.push(i);
    }
    return res;
}