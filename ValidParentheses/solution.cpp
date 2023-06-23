#include<stack>
bool isValidParenthesis(string expression){

    stack<char> st;
    for(auto s : expression){
        // if the stack is empty
        if(st.empty()) st.push(s);
        // if we get the right parenthesis for the left one, then pop it.
        else if((s==')'&& st.top()=='(')||(s==']'&& st.top()=='[')||(s=='}'&& st.top()=='{')) st.pop();
        // otherwise push the incoming character into stack
        else st.push(s);
    }
    return st.empty();
    
}