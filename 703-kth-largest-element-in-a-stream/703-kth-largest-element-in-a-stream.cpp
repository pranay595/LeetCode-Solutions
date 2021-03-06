class KthLargest {
public:
    priority_queue<int,vector<int>, greater<int>> pq;
    int k;
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        
        for(auto i:nums){
            pq.push(i);
        }
    }
    
    int add(int val) {
        pq.push(val);
        int n = pq.size();
        
        if(n>k)
        while(pq.size()!=k)
            pq.pop();
        
        
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */