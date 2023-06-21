vector<int> KMaxSumCombination(vector<int>& a,vector<int>& b,int n, int k){

    // sort the both arrays
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    priority_queue<pair<int,pair<int,int>>> pq;
    set<pair<int,int>> st;

    // push the maximum value
    pq.push({a[n-1]+b[n-1],{n-1,n-1}});
    st.insert({n-1,n-1});

    vector<int> ans;

    while(k--){

        // remove the top element of the priority queue
        auto top = pq.top();
        pq.pop();
        
        auto sum = top.first;
        auto i = top.second.first;
        auto j = top.second.second;

        // insert (i-1,j)
        if(st.find({i-1,j})==st.end()){
            st.insert({i-1,j});
            pq.push({a[i-1]+b[j],{i-1,j}});
        }

        // insert (i,j-1)
        if(st.find({i,j-1})==st.find()){
            st.insert({i,j-1});
            pq.push({a[i]+b[j-1],{i,j-1}});
        }

        ans.push_back(sum);
    }
    return ans;
}