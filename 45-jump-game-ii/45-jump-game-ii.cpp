class Solution {
public:
    int helper(int ind,int n, vector<int>& nums, vector<int> &dp){
        if(ind>=nums.size()-1)
            return 0;
        
        if(dp[ind]!=-1)
            return dp[ind];
        
        int mini = 1e9;
        for(int i=nums[ind];i>0;i--)
        {
            mini = min(mini,1+helper(ind+i,n,nums,dp));
        }
        return dp[ind] = mini;
        
    }
    
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1,-1);
        return helper(0,n,nums,dp);
        
    }
};