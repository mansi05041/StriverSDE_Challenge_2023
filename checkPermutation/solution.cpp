bool areAnagram(string &str1,string &str2){
    if(str1.size()!=str2.size()) return false;
    unordered_map<char,int> mp;

    for(auto ch: str1) mp[ch]++;
    for(auto ch: str2) mp[ch]++;

    for(auto it: mp){
        if(it.second%2!=0) return false;
    }

    return true;
}