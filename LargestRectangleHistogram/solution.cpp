int largestRectangle(vector<int>& heights){
    int n = heights.size();
    vector<int> nextSmaller(n);
    vector<int> prevSmaller(n);
    stack<int> st;

    // for previous smaller
    for(int i=0;i<n;i++){
        while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();
        if(st.empty()) prevSmaller[i]=-1;
        else prevSmaller[i]=st.top();
        st.push(i);
    }

    // empty the stack
    st = stack<int>();

    // for next smaller
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && heights[st.top]>=heights[i]) st.pop();
        if(st.empty()) nextSmaller[i]=n;
        else nextSmaller[i]=st.top();
        st.push(i);
    }

    // calculate the max area
    int maxArea = 0;
    for(int i=0;i<n;i++){
        maxArea = max(maxArea,(nextSmaller[i]-prevSmaller[i]-1)*heights[i]);
    }

    return maxArea;
}