int sumSubset(vector<int> arr){
    int sum=0;
    for(auto it: arr) sum+=it;
    return sum;
}

void findTargetSubset(vector<int>& arr, int n, int k, int idx, vector<vector<int>>& subset, vector<int> currentSubset){
    if(sumSubset(currentSubset)==k) subset.push_back(currentSubset);
    
    // generate all the possible subsets
    for(int i=idx;i<n;i++){
        currentSubset.push_back(arr[i]);
        findTargetSubset(arr,n,k,i+1,subset,currentSubset);
        currentSubset.pop_back();
    }
}

vector<vector<int>> findSubsetThatSumToK(vector<int> arr,int n, int k){
    vector<vector<int>> subset;
    findTargetSubset(arr,n,k,0,subset,{});
    return subset;
}