bool comp(vector<int>& a,vector<int>& b){
    // sort according to the profits (descending order)
    return a[1]>b[1];
}

int jobScheduling(vector<vector<int>>& jobs){
    sort(jobs.begin(),jobs.end(),comp);

    // find the max deadline
    int deadline = jobs[0][0];
    for(int i=1;i<jobs.size();i++){
        if(jobs[i][0]>deadline) deadline = jobs[i][0];
    }

    vector<int> slot(deadline+1,-1);
    int maxProfit =0;

    for(int i=0;i<jobs.size();i++){
        for(int j=jobs[i][0];j>0;j--){
            if(slot[j]==-1){
                slot[j]=i;
                maxProfit+=jobs[i][1];
                break;
            }
        }
    }
    return maxProfit;
}