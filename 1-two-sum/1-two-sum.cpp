class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        if(n==2){
            return {0,1};
        }
        vector<int> ans;
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++){
            if(mp.count(target-nums[i])){
                ans.push_back(mp[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            else{
                mp[nums[i]]=i;
            }
        }
        return ans;
    }
};