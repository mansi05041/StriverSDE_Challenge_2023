int minTimeToRot(vector<vector<int>>& grid, int n, int m){
    vector<vector<int>> visited(n,vector<int>(m,0));
    queue<pair<pair<int,int>,int>> q;
    int time = 0;
    int countFresh = 0;

    // push the all rotten oranges into queue
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==2){
                // rotten oranges
                q.push({{i,j},0});
                visited[i][j]=1;
            }
            if(grid[i][j]==1) countFresh++;
        }
    }

    // perform BFS
    vector<int> nextI = {0,1,-1,0};
    vector<int> nextJ = {1,0,0,-1};
    int count =0;

    while(!q.empty()){
        auto row = q.front().first.first;
        auto col = q.front().first.second;
        auto t = q.front().second;
        q.pop();

        // update the max time
        time = max(time, t);

        for(int k=0;k<4;k++){
            int nrow = row+nextI[k];
            int ncol = col+nextJ[k];

            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && visited[nrow][ncol]==0 && grid[nrow][ncol]==1){
                q.push({{nrow,ncol},t+1});
                visited[nrow][ncol]=1;
                count++;
            }
        }

    }
    return count==countFresh ? time : -1;
}