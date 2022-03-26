class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map <int,int> mp;
        int n = nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            ++mp[nums[i]];
        }
        
        for(auto i:mp){
            if(i.second==2)
                ans.push_back(i.first);
        }
        return ans;
    }
};