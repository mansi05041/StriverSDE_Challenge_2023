int kLargest(vector<int>& arr,int left,int right,int k){
    if(left==right) return arr[left];

    int p = left; // partitioning index
    int pivot = arr[right];

    for(int i=left;i<right;i++){
        if(arr[i]<pivot) swap(arr[i],arr[p++]);
    }
    // swap with the pivot element
    swap(arr[right],arr[p]);

    // element is in left half [left to p-1]
    if(p>=k) return kLargest(arr,left,p-1,k);
    // element is in right half [p+1 to right]
    if(p<k-1) return kLargest(arr,p+1,right,k);

    return arr[p];
}
vector<int> KthSmallestLarge(vector<int>& arr,int n,int k){
    vector<int> ans;
    ans.push_back(kLargest(arr,0,n-1,k));
    ans.push_back(kLargest(arr,0,n-1,n-k+1));
    return ans;
}