void GetUniqueSubset(vector<int>& arr,int idx,vector<vector<int>>& subset,vector<int>& currentSubset,int n){
    subset.push_back(currentSubset);

    for(int i=idx;i<n;i++){
        if(i!=idx && arr[i]==arr[i-1]) continue; // skip duplicates

        currentSubset.push_back(arr[i]);
        GetUniqueSubset(arr,i+1,subset,currentSubset,n);
        currentSubset.pop_back();
    }
}

vector<vector<int>> uniqueSubsets(int n, vector<int>& arr){
    vector<vector<int>> Subset;
    sort(arr.begin(),arr.end());
    GetUniqueSubset(arr,0,Subset,{},n);
    return Subset;
}