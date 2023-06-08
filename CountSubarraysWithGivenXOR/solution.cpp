int subarraysXOR(vector<int>& arr,int x){
    int xorr=0;
    int count=0;
    unordered_map<int,int> mp;

    for(auto it:arr){
        xorr=xorr^x;
        // check if the current XOR is equal to x
        if(xorr==x) count++;
        // check if xorr^x is present in the map
        if(mp.find(xorr^x)!=mp.end()) count+=mp[xorr^x];
        mp[xorr]++;
    }
    return count;
}