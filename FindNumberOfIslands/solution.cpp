void bfs(int row,int col,int** arr,vector<vector<int>>& visited,int n,int m){
    // mark the current grid visited
    visited[row][col] = 1;
    
    // for performing the BFS
    queue<pair<int,int>> q;

    q.push({row,col});

    while(!q.empty()){

        // perform BFS
        auto xi = q.front().first;
        auto yi = q.front().second;
        q.pop();

        // explore all the other options
        vector<int> newI = {-1,-1,-1,0,0,1,1,1};
        vector<int> newJ = {-1,0,1,-1,1,-1,0,1};

        for(int k=0;k<8;k++){
            int ri = xi+newI[k];
            int rj = yi+newJ[k];

            // check if the grid is valid 
            if(ri>=0 && ri<n && rj>=0 && rj<m && arr[ri][rj]==1 && visited[ri][rj]==0){
                q.push({ri,rj});
                visited[ri][rj]=1;
            }
        }
    }
}

int getTotalIslands(int** arr,int n,int m){
    // visited vector
    vector<vector<int>> visited(n,vector<int>(m,0));

    int count = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            // if the grid is land and not visited yet
            if(arr[i][j]==1 && visited[i][j]==0){
                count++;
                bfs(i,j,arr,visited,n,m);
            }
        }
    }

    return count;
}