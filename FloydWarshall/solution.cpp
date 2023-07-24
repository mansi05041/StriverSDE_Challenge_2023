int floydWarshall(int n,int m,int src,int dest,vector<vector<int>>& edges){

    vector<vector<int>> matrix(n,vector<int>(n,1e9));

    // set the diagonal elements 0 and update the weighted edges
    for(int i=0;i<n;i++) matrix[i][i] = 0;

    for(auto it:edges){
        // to fit into 0-based indexing
        matrix[it[0]-1][it[1]-1] = it[2];
    }

    // applying floyd warshall 
    for(int via=0; via<n; via++){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){

                if(matrix[i][via]!=1e9 && matrix[via][j]!=1e9 && matrix[i][j]>matrix[i][via]+matrix[via][j]){
                    matrix[i][j] = matrix[i][via]+matrix[via][j];
                }
            }
        }
    }

    return matrix[src-1][dest-1];
}