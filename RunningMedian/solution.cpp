#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void insertIntoHeap(priority_queue<int>& maxHeap, priority_queue<int,vector<int>,greater<int>>& minHeap, int ele){

    // insert the element
    if(maxHeap.empty()==true || maxHeap.top()>=ele) maxHeap.push_back(ele);
    else minHeap.push(ele);

    // balance the both heaps

    // if the maxheap has more elements than minheap
    if(maxHeap.size()>minHeap.size()+1){
        int temp = maxHeap.top();
        maxHeap.pop();
        minHeap.push(temp);
    }

    // if minheap has more elements than maxheap
    else if(maxHeap.size()<minHeap.size()){
        int temp = minHeap.top();
        minHeap.pop();
        maxHeap.push(temp);
    }
}

double getMedian(priority_queue<int>& maxHeap, priority_queue<int,vector<int>,greater<int>>& minHeap){
    if(maxHeap.size()==minHeap.size()) return (maxHeap.top()+minHeap.top())/2.0;
    return maxHeap.top();
}

void findMedian(int* arr,int n){

    // max heap
    priority_queue<int> maxHeap;
    // min heap
    priority_queue<int,vector<int>,greater<int>> minHeap;

    for(int i=0;i<n;i++){
        insertIntoHeap(maxHeap,minHeap,arr[i]);
        cout<<getMedian(maxHeap,minHeap)<<" ";
    }
}