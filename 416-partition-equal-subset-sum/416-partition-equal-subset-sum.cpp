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
    
    bool can(int n, int target, vector<int>& nums){
        vector<bool> prev(target+1,0), curr(target+1,0);
        if(nums[0]<=target)
            prev[nums[0]] = true;
        
        for(int ind = 1;ind<n;ind++){
            for(int k=1;k<=target;k++){
                bool notPick = prev[k];
                bool pick = false;
                if(nums[ind]<=k)
                    pick = prev[k-nums[ind]];
                curr[k] = pick || notPick;
            }
            prev = curr;
        }
        return prev[target];
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
        // return helper(n-1,sum,nums,dp);
        return can(n,sum,nums);
    }
};