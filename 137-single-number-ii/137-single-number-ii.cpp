class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            ++mp[nums[i]];
        }
        int ans;
        for(auto i:mp){
            if(i.second==1){
                ans = i.first;
                break;
            }
        }
        return ans;
    }
};