bool isGraphBirpatite(vector<vector<int>>& edges){

    // base case
    if(edges.size()==0) return true;

    vector<int> color(edges.size(),-1);

    // perform the bfs

    // to handle disconnected graphs
    for(int i=0;i<edges.size();i++){
        // not colored already
        if(color[i]==-1){
            queue<int> q;
            q.push(i); // starting node
            color[i]=0;

            while(!q.empty()){
                // get the front node from queue
                auto node = q.front();
                q.pop();

                // get the color
                int col = color[node];

                // iterate to the adjacency matrix
                for(int j=0;j<edges[0].size();j++){
                    if(edges[node][j]==1){
                        // there is an edge b/w them
                        // check if it is not yet colored
                        if(color[j]==-1){
                            color[j] = (col==0) ? 1 : 0;
                            q.push(j);
                        }
                        else{
                            if(col == color[j]) return false;
                        }
                    }
                }
            }
        }
    }
    return true;
}