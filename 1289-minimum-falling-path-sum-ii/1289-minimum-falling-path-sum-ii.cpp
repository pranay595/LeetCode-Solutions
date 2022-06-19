class Solution {
public:
    int helper(int i, int j, vector<vector<int>>& grid, vector<vector<int>> &dp){
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        if(i==0)
            return grid[i][j];
        
        int ans = 1e9;
        for(int l=0;l<grid[0].size();l++){
            if(l!=j)
                ans = min(ans, grid[i][j] + helper(i-1,l,grid,dp));
        }
        return dp[i][j] = ans;
    }
    
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        // vector<vector<int>> dp(m,vector<int>(m,-1));
        
        vector<int> prev(m,0);
        vector<int> curr(m,0);
        
        for(int j=0;j<m;j++){
            prev[j] = grid[0][j];
        }
        
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                    int ans = 1e9;
                for(int k=0;k<m;k++){
                    if(j!=k){
                        ans = min(ans,prev[k]);
                    }
                }
                curr[j] = ans+grid[i][j];
            }
            prev = curr;
        }
        
        
        int mini = 1e9;
        for(int j=0;j<m;j++){
            mini = min(mini,prev[j]);
        }
        
        return mini;
    }
};