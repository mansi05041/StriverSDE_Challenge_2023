#include<stack>

string reverseString(string &str){
    stack<string> st;

    for(int i=0;i<str.size();i++){
        string word="";
        while(str[i]!=' ' && i<str.size()){
            word+=str[i];
            i++;
        }
        if(word!=" ") st.push(word);
    }

    string res = "";
    while(!st.empty()){
        res+=st.top()+" ";
        st.pop();
    }
    
    return res;
}