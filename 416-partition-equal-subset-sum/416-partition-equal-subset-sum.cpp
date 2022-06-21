class Solution {
public:
    bool helper(int ind, int target, vector<int>& nums, vector<vector<int>> &dp){
        if(target==0)
            return true;
        if(ind==0){
            return (target==nums[ind]);
        }
        
        if(dp[ind][target]!=-1)
            return dp[ind][target];
        
        bool notPick = helper(ind-1,target,nums,dp);
        bool pick = false;
        if(target>=nums[ind])
            pick = helper(ind-1,target-nums[ind],nums,dp);
        
        return dp[ind][target] = pick || notPick;
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum%2==1)
            return false;
        sum/=2;
        vector<vector<int>> dp(n,vector<int>(sum+1,-1));
        return helper(n-1,sum,nums,dp);
    }
};