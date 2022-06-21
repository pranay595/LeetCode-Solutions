class Solution {
public:
    bool helper(int ind, int sum, int target, vector<int>& nums, vector<vector<int>> &dp){
        if(sum==target)
            return true;
        if(ind==0){
            return (sum-nums[ind] == target+nums[ind]);
        }
        
        if(dp[ind][sum]!=-1)
            return dp[ind][sum];
        
        bool notPick = helper(ind-1,sum,target,nums,dp);
        bool pick = false;
        if(target<=sum-2*nums[ind])
            pick = helper(ind-1,sum-nums[ind],target+nums[ind],nums,dp);
        
        return dp[ind][sum] = pick || notPick;
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        vector<vector<int>> dp(n,vector<int>(sum+1,-1));
        return helper(n-1,sum,0,nums,dp);
    }
};