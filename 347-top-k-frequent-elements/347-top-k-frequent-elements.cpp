class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        if(n==1)
            return {nums[0]};
        vector<int> ans;
        
        unordered_map<int,int> mp;
        
        for(auto i:nums) ++mp[i];
        
        priority_queue <pair<int,int>> pq;
        
        for(auto i:mp) {
            int freq = i.second;
            int val = i.first;
            pq.push({freq,val});
        }
        
        while(k && !pq.empty()){
                auto temp = pq.top();
                ans.push_back(temp.second);
                pq.pop();
                k--;
        }
        return ans;
            
    }
};