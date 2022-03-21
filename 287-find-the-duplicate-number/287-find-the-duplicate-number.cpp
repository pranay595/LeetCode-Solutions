class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        int ans;
        for(int i=0;i<n;i++){
            ++mp[nums[i]];
        }
        for(auto i:mp){
            if(i.second>=2){
                ans = i.first;
        }}
        return ans;
    }
};