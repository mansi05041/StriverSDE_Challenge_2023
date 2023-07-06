vector<int> slidingWindowMaximum(vector<int>& nums,int k){
    deque<int> dq;
    vector<int> v;

    for(int i=0;i<nums.size();i++){
        // remove the out of bound elements
        if(!dq.empty() && dq.front()==i-k) dq.pop_front();
        // remove the lesser elements from the back
        while(!dq.empty() && nums[dq.back()]<=nums[i]) dq.pop_back();
        dq.push_back(i);
        if(i>=k-1) v.push_back(nums[dq.front()]);
    }
    return v;
}