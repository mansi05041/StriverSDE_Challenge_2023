#include<queue>

void insert(int n,priority_queue<int>& maxHeap,priority_queue<int,vector<int>,greater<int>> &minHeap){
    // insert the number
    if(maxHeap.empty() || n<=maxHeap.top()) maxHeap.push(n);
    else minHeap.push(n);

    // re arrange the numbers
    // assuming that the size of maxheap is always equal or greater by 1 than minHeap
    if(maxHeap.size()>minHeap.size()+1){
        int ele = maxHeap.top();
        maxHeap.pop();
        minHeap.push(ele);
    }
    if(minHeap.size()>maxHeap.size()){
        int ele = minHeap.top();
        minHeap.pop();
        maxHeap.push(ele);
    }
}

int get(priority_queue<int>& maxHeap,priority_queue<int,vector<int>,greater<int>>& minHeap){
    // The size of both heaps are equal
    if(minHeap.size()==maxHeap.size()) return (maxHeap.top()+minHeap.top())/2;
    // The size of the max heap is greater
    return maxHeap.top();
}

vector<int> findMedian(vector<int>& arr,int n){
    priority_queue<int> maxHeap;
    priority_queue<int,vector<int>,greater<int>> minHeap;

    vector<int> ans;

    for(auto it: arr){
        insert(it,maxHeap,minHeap);
        ans.push_back(get(maxHeap,minHeap));
    }

    return ans;
}