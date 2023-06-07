vector<vectoe<int>> pairSum(vector<int>& arr,int s){
    // use a hash map to store the value and frequency
    unordered_map<int,int> hash;
    vector<vector<int>> result;

    for(int i=0;i<arr.size();i++){
        // if the s-arr[i] is present in the hash map
        if(hash[s-arr[i]]){
            int val = hash[s-arr[i]];
            vector<int> temp;
            while (val--)
            {
                temp.push_back(min(arr[i],s-arr[i]));
                temp.push_back(max(arr[i],s-arr[i]));
                result.push_back(temp);
            }
        }
        hash[arr[i]]++;
    }
    // sort the results
    sort(result.begin(),result.end());
    return result;
}