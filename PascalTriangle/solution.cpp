vector<long long int> generateRow(int row){
    long long int ans = 1;
    vector<long long int> ansRow;
    ansRow.push_back(1); // The first element should always be 1
    for(int col=1;col<row;col++){
        // update ans using binomial coefficient
        ans = ans*(row-col);
        ans = ans/col;
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<long long int>> printPascal(int n){
    vector<vector<long long int>> pascal;
    for(int i=1;i<=n;i++){
        // update the pascal triangle
        pascal.push_back(generateRow(i));
    }
    return pascal;
}