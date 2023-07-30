bool findPattern(string p,string s){
    vector<int> lps(p.size());
    // building lps array
    for(int i=1;i<p.size();i++){
        int j = lps[i-1];
        while(j>0 && p[i]!=p[j]) j = lps[j-1];
        if(p[i]==p[j]) j++;
        lps[i] = j;
    }

    int i = 0; // track the string
    int j = 0; // track the pattern

    while(i<s.size()){
        // if the character matches
        if(s[i]==p[j]){
            i++; 
            j++;
        }

        // pattern found
        if(j==p.size()) return true;

        // characters doesn't matches
        else if(i<s.size() && s[i]!=p[j]){
            if(j>0) j = lps[j-1];
            else i++;
        }
    }

    return false;
}