vector<int> mergeKSortedArrays(vector<vector<int>>& kArrays, int k){
    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int>>>> pq;

    for(int i=0;i<k;i++){
        pq.push({kArrays[i][0],{i,0}});
    }

    vector<int> mergeArray;

    while(!pq.empty()){
        // remove the top element
        auto top = pq.top();
        pq.pop();

        auto ele = top.first;
        auto arN = top.second.first;
        auto idx = top.second.second;

        if(idx+1<kArrays[arN].size()) pq.push({kArrays[arN][idx+1],{arN,idx+!}});
        mergeArray.push_back(ele);
    }
    return mergeArray;
}