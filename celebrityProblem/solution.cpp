int findCelebrity(int n){
    stack<int> st;
    // insert all the people id into the stack
    for(int i=0;i<n;i++) st.push(i);

    // find the potential celebrity
    while(st.size()>1){
        // get the top two people from stack
        int A = st.top();
        st.pop();
        int B = st.top();
        st.pop();

        // check if A knows the person B, that means A is not a celebrity (if true)
        if(knows(A,B)) st.push(B);
        // otherwise check is B knows the person A, that means B is not a celebrity (if true)
        if(knows(B,A)) st.push(A);
    }

    // edge case
    if(st.empty()) return -1; // no potential celebrity is found

    // get the potential celebrity
    int celebrity = st.top();

    // verify it is a celebrity or not

    // celebrity doesn't know any one
    for(int i=0;i<n;i++){
        if(i==celebrity) continue;
        if(knows(celebrity,i)) return -1; // not a celebrity
    }

    // everyone knows the celebrity 
    for(int i=0;i<n;i++){
        if(i==celebrity) continue;
        if(!knows(i,celebrity)) return -1; // not a celebrity
    }

    return celebrity;
}