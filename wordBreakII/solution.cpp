vector<string> helper(string &s,int idx,unordered_set<string> dict,unordered_map<int,string>& dp,int size){

    // base case
    if(size==idx) return{}; // reach the end of string

    // if already solved that sub problem
    if(dp.find(idx)!=dp.end()) return dp[idx];

    // find the word that will append 
    string word;
    vector<string> result;

    // explore the word starting from index idx
    for(int i=idx;i<size;i++){
        word+=s[i];

        // check if it is not present in the dictionary
        if(!dict.count(word)) continue;

        // reached the end of string
        if(i==size-1){
            result.push_back(word);
            break;
        }

        // if the word present in the dictionary then find the rest sentence
        vector<string> subString = helper(s,i+,dict,dp,size);

        // append the word with all the possible answer
        for(auto it: subString){
            result.push_back(word+" "+it);
        }
    }

    // store the result into dp
    dp[idx] = result;
    return dp[idx];
}

vector<string> wordBreak(string& s,vector<string>& dictionary){
    // use dp to store the string that occur at every index
    unordered_map<int,vector<string>> dp;
    
    // store the dictionary into set
    unordered_set<string> dict;
    for(auto it: dictionary) dict.insert(it);

    // call the helper function that gives all the possible solution
    return helper(s,0,dict,dp,s.size());
}