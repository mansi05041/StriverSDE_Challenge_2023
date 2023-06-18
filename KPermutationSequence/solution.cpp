string KthPermutation(int n, int k){
    // calculate the factorial of n-1 and store the numbers from 1 to n
    vector<int> num;
    int fact =1;

    for(int i=1;i<n;i++){
        fact*=i;
        num.push_back(i);
    }
    num.push_back(n);
    string res = "";
    k=k-1; // considering 0th based indexing

    while(true){
        res = res + to_string(num[k/fact]);
        // remove the element form that array
        num.erase(num.begin()+k/fact);
        if(num.size()==0) break;
        k = k%fact;
        fact = fact/num.size();
    }
    return res;
}