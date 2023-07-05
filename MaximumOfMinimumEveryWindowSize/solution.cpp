vector<int> previousSmaller(vector<int> a,int n){
    stack<int> st;
    vector<int> prev(n,-1);
    for(int i=0;i<n;i++){
        while(!st.empty() && a[i]<=a[st.top()]) st.pop();
        if(!st.empty()) prev[i]=st.top();
        st.push(i);
    }
    return prev;
}

vector<int> nextSmaller(vector<int> a,int n){
    stack<int> st;
    vector<int> next(n,n);
    for(int i=n-1;i>=0;i--){
        whilr(!st.empty() && a[i]<=a[st.top()]) st.pop();
        if(!st.empty()) next[i]=st.top();
        st.push(i);
    }
    return next;
}

vector<int> maxMinWindow(vector<int> a,int n){
    vector<int> prev = previousSmaller(a,n);
    vector<int> next = nextSmaller(a,n);

    vector<int> ans(n,INT_MIN);

    for(int i=0;i<n;i++){
        int len = next[i]-prev[i]-1;
        ans[len-1]= max(ans[len-1],a[i]);
    }

    // update the remaining window sizes
    for(int i=n-2;i>=0;i--){
        ans[i]=max(ans[i],ans[i+1]);
    }

    return ans;
}