vector<int> countDistinctElements(vector<int>& arr, int k){
    vector<int> res;
    unordered_map<int,int> mp;

    // store the frequency of first k sized window
    for(int i=0;i<k;i++) mp[arr[i]]++;

    res.push_back(mp.size());

    // process the other windows
    for(int i=k;i<arr.size();i++){
        // remove the element from previous window
        mp[arr[i-k]]--;
        // remove the data if the frequency is zero
        if(mp[arr[i-k]]==0) mp.erase(arr[i-k]);

        // add the current element into map
        mp[arr[i]]++;

        // update the result
        res.push_back(mp.size());
    }

    return res;
}