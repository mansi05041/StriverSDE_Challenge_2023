
// function to remove the leading zeroes
string removeZeroFromEnd(string s){

    // intialize the length of the final string obtained
    int p = s.size()-1;

    // traverse the string backwards
    for(int i=s.size()-1;i>=1;i-=2){
        // check if the current character is 0 and there is dot to the left of it
        if(s[i]=='0' && s[i-1]=='.') p-=2;
        else break;
    }

    return s.substr(0,p+1);
}

int compareVersion(string a,string b){
    a = removeZeroFromEnd(a);
    b = removeZeroFromEnd(b);

    // intialize the pointers
    int s1=0, s2=0, e1=0, e2=0;

    while(true){

        // find the first dot to the right of s1 in 'a' string
        while(e1<a.size() && a[e1]!='.') e1++;

        // find the second dot to the right of s2 in 'b' string
        while(e2<b.size() && b[e2]!='.') e2++;

        // finding the greater one among e1 and e2
        if(e1>e2) return 1;
        else if(e1<e2) return -1;

        // comparing both the strings character by character
        for(int i=s1;i<e1;i++){
            if(a[i]>b[i]) return 1;
            else if(b[i]>a[i]) return -1;
        }

        // check if we reached the end of both strings
        if(e1==a.size() && e2==b.size()) return 0;
        if(e1==a.size()) return -1;
        if(e2==a.size()) return 1;


        // update the pointers
        s1 = e1;
        s2 = e2;
        e1++;
        e2++; 
    }
}