class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            ++mp[nums[i]];
        }
        
        int major = n/3;
        
        for(auto i:mp){
            if(i.second>major)
                ans.push_back(i.first);
        }
        return ans;
    }
};