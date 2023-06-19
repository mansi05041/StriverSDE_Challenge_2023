void solve(vector<vector<int>>& maze,int n,vector<vector<int>> visited,vector<vector<int>>& ans,int i,int j){

    // if we reached the target
    if(i==n-1 && j==n-1){
        visited[i][j]=1;
        vector<int> temp;
        for(int x=0;x<n;x++){
            for(int y=0;y<n;y++){
                temp.push_back(visited[x][y]);
            }
        }
        ans.push_back(temp);
    }

    // mark the current grid visited
    visited[i][j]=1;

    // iterate all the possible directions
    vector<int> possibleI = {-1,0,1,0};
    vector<int> possibleJ = {0,1,0,-1};

    for(int k=0;k<4;k++){
        int newI = i+possibleI[k];
        int newJ = j+possibleJ[k];

        if(newI>=0 && newI<n && newJ>=0 && newJ<n && visited[newI][newJ]==0 && maze[newI][newJ]==1){
            solve(maze,n,visited,ans,newI,newJ);
        }
    }

    // backtrack
    visited[i][j]=0;
}

vector<vector<int>> ratInMaze(vector<vector<int>>& maze, int n){
    vector<vector<int>> visited(n,vector<int>(n,0));
    vector<vector<int>> ans;
    solve(maze,n,visited,ans,0,0);
    return ans;
}