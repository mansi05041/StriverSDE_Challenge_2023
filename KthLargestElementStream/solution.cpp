class Kthlargest{
    public:
    priority_queue<int,vector<int>,greater<int>> pq;
    int K;

    Kthlargest(int k,vector<int>& arr){
        K = k;
        for(auto it: arr){
            pq.push(it);
            if(k<pq.size()) pq.pop();
        }
    }

    void add(int num){
        pq.push(num);
        if(K<pq.size()) pq.pop();
    }

    int getKthLargest(){
        return pq.empty() ? -1 : pq.top();
    }
};