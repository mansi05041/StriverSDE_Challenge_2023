vector<int> majorityElementII(vector<int> &arr){
    unordered_map<int,int> mp;
    int n=arr.size();
    vector<int> res;

    for(auto it: arr) mp[it]++;

    for(auto it: mp){
        if(it.second>floor(n/3)) res.push_back(it.first);
    }

    return res;
}