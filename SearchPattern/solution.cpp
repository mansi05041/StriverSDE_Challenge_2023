#define d 256
#define q 101

vector<int> stringMatch(string text,string pattern){

    vector<int> idx;

    int m = pattern.size();
    int n = text.size();

    if(m>n) return idx;

    int i,j;
    int p = 0; // hash value for pattern
    int t = 0; // hash value for text
    int h = 1;

    // the value of h would be "pow(d,m-1)%q"
    for(i=0;i<m-1;i++){
        h = (h*d)%q;
    }

    // calculate the hash value for pattern and text
    for(i=0;i<m;i++){
        p = (d*p+pattern[i])%q;
        t = (d*t+text[i])%q;
    }

    // find the match
    for(i=0;i<=n-m;i++){
        // if the hash values match, then check character by character
        if(p==t){
            for(j=0;j<m;j++){
                if(text[i+j]!=pattern[j]) break;
            }

            if(j==m) idx.push_back(i+1);
        }

        // calculate the hash value for the next window of text
        if(i<n-m){
            t = (d*(t-text[i]*h)+text[i+m])%q;

            // if we get negative then convert to positive
            if(t<0) t = t+q;
        }
    }

    return idx;
}