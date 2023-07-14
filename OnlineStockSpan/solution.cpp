vector<int> prevGreater(vector<int>& arr){
    stack<int> st;
    vector<int> res(arr.size());

    for(int i=0;i<arr.size();i++){
        while(!st.empty() && arr[st.top()]<=arr[i]) st.pop();
        if(st.empty()) res[i]=-1;
        else res[i]=st.top();
        st.push(i);
    }
    return res;
}

vector<int> findSpans(vector<int>& price){
    vector<int> PG = prevGreater(price);
    vector<int> res(price.size());

    for(int i=0;i<price.size();i++){
        res[i]=i-PG[i];
    }
    return res;
}