class Solution {
public:
    bool helper(int ind,int n, vector<int>& nums, vector<int> &dp){
        if(ind==n-1)
            return true;
        
        if(nums[ind]==0)
            return false;
        
        if(dp[ind]!=-1)
            return dp[ind];
        
        for(int i=1;i<=nums[ind];i++){
            if(helper(ind+i,n,nums,dp))
                return dp[ind+i]=true;
        }
        return dp[ind] = false;
        
    }
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1,-1);
        return helper(0,n,nums,dp);
    }
};