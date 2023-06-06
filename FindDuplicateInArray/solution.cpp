int findDuplicate(vector<int>& arr, int n){
    for(int i=0;i<n;i++){
        // get the current position
        pos= abs(arr[i]);
        // encounter with the duplicate element
        if(arr[pos]<0) return pos;
        // update the value 
        arr[pos]*=(-1);
    }
    return -1;
}