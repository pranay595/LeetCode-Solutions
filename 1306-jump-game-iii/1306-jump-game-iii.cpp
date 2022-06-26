class Solution {
public:
    bool helper(int ind, int n, vector<int>& arr, vector<int>& dp){
        if(ind<0 || ind>n-1 || arr[ind]==-1)
            return false;
        
        if(arr[ind]==0)
            return true;
        
        if(dp[ind]!=-1)
            return dp[ind];
        
        int val = arr[ind];
        arr[ind] = -1;
        return dp[ind] = helper(ind+val,n,arr,dp) || helper(ind-val,n,arr,dp);

    }
    bool canReach(vector<int>& arr, int start) {
        int n = arr.size();
        vector<int> dp(n,-1);
        
        return helper(start,n,arr,dp);
    }
};