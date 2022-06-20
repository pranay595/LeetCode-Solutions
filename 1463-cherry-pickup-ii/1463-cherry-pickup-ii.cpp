class Solution {
public:
    int helper(int i1, int j1, int i2, int j2, int n, int m, vector<vector<int>>& grid, vector<vector<vector<int>>> &dp){
        if(j1<0 || j1>m-1 || j2<0 || j2>m-1)
            return -1e9;
        
        if(dp[i1][j1][j2]!=-1)
            return dp[i1][j1][j2];
        
        if(i1==n-1){
            if(j1==j2)
                return grid[i1][j1];
            return grid[i1][j1] + grid[i2][j2];
        }
        
        int d[] = {-1,0,1};
        
        int maxi = INT_MIN;
        
        for(int k1=-1;k1<=1;k1++){
            for(int k2=-1;k2<=1;k2++){
                if(j1==j2)
                    maxi = max(grid[i1][j1]+helper(i1+1,j1+k1,i2+1,j2+k2,n,m,grid,dp),maxi);
                else
                    maxi = max(grid[i1][j1]+grid[i2][j2]+helper(i1+1,j1+k1,i2+1,j2+k2,n,m,grid,dp),maxi);
            }
        }
        return dp[i1][j1][j2] = maxi;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(m,vector<int>(m,-1)));
        
        return helper(0,0,0,m-1,n,m,grid,dp);
    }
};