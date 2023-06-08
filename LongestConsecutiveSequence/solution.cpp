int lengthOfLongestConsecutiveSequence(vector<int>& arr,int n){
    // set to find the consecutive sequence
    unordered_set<int> s;

    // add all the elements in the set
    for(auto it: arr) s.insert(it);

    int maxLen =0;
    // find the maximum length of consecutive sequence
    for(auto it: s){
        if(s.find(it-1)==s.end){
            // the element should be first in the sequence
            int count =1;
            int var = it+1;
            while (s.find(var)!=s.end())
            {
                count++;
                var++;
            }
            maxLen = max(maxLen,count);
        }
    }
    return maxLen;
}