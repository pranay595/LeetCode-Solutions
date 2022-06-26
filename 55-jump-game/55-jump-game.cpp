class Solution {
public:
    bool helper(int ind,int n, vector<int>& nums, vector<int> &dp){
        if(ind>=nums.size()-1)
            return true;
        
        if(dp[ind]!=-1)
            return dp[ind];
        
        for(int i=nums[ind];i>0;i--)
        {
            if(helper(ind+i,n,nums,dp))
                return dp[ind]=true;
        }
        return dp[ind] = false;
        
    }
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        // vector<int> dp(n+1,0);
        // return helper(0,n,nums,dp);
        
        vector<bool> dp(n);
        
        dp[n-1]=1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]==0) continue;
            for(int j=1;j<=nums[i];j++){
                if(dp[i+j]){
                    dp[i]=true;
                    break;
                }
            }
        }
        return dp[0];
    }
};