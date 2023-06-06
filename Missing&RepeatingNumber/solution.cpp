pair<int,int> missingAndRepeating(vector<int> &arr,int n){
    pair<int,int> res;
    int i=0;
    while (i<arr.size())
    {
        if(arr[i]!=arr[arr[i]-1]) swap(arr[i],arr[arr[i]-1]);
        else i++;
    }

    for(int i=0;i<arr.size();i++){
        if(arr[i]!=i+1){
            res.first=i+1;
            res.second=arr[i];
        }
    }
    return res;
}