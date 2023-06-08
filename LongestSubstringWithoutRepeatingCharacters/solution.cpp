int uniqueSubstrings(string input){
    int start=0;
    int end=0;
    int maxLen=0;
    unordered_set<char> s;

    while(end<input.size()){
        // check if the current character not present in the set
        if(s.find(input[end])==s.end()){
            // add the character into the set
            s.insert(input[end]);
            // update the maxLen
            if(maxLen<end-start+1) maxLen=end-start+1;
            // increment the end
            end++;
        }
        else{
            // remove the first character of the sliding window
            s.erase(input[start]);
            // increment the start
            start;
        }
    }
    return maxLen;
}