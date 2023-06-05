vector<int> nextPermutation(vector<int>& permutation, int n){
    // base case
    if(n==0) return{};
    if(n==1) return permutation;

    // find the mountain element from right
    int i;
    for(i=n-2;i>=0;i--){
        if(permutation[i]<permutation[i+1]) break;
    }

    // permutation is itself greater
    if(i<0) sort(permutation.begin(),permutation.end());

    else{
        // find the element which is greater than the mountain element from the right
        int j;
        for(j=n-1;j>i;j--){
            if(permutation[j]>permutation[i]) break;
        }

        // swap the both elements at ith and jth position
        swap(permutation[i],permutation[j]);

        // reverse the array from i+1 th position
        reverse(permutation.begin()+i+1,permutation.end());
    }
    return permutation;
}