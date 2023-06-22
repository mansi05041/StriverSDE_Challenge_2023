vector<int> KMostFrequent(int n,int k,vector<int>& arr){

    // store the frequency of each element
    unordered_map<int,int> mp;
    for(auto it: arr) mp[it]++;

    // get the max K frequency elements
    priority_queue<pair<int,int>> pq;
    for(auto it: mp) pq.push({it.second,it.first});

    // store the result
    vector<int> ans;
    while (k--)
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    sort(ans.begin(),ans.end());
    return ans;
}