vector<int> minHeap(int n, vector<vector<int>>& q){
    priority_queue<int,vector<int>,greater<int>> pq;
    vector<int> print;

    for(auto it: q){
        if(it[0]==0){
            // insert into queue
            pq.push(it[1]);
        }
        if(it[0]==1 && !pq.empty()){
            print.push_back(pq.top());
            pq.pop();
        }
    }

    return print;
}