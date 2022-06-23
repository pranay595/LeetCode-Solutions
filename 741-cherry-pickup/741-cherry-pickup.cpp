class Solution {
public:
    int dp[51][51][51][51];
    int helper(int i1, int j1, int i2, int j2, int n, vector<vector<int>>& grid){
        if(j1>n-1 || j2>n-1 || i1>n-1 || i2>n-1 || grid[i1][j1]==-1 || grid[i2][j2]==-1)
            return -1e9;
        
        if(i1==n-1 && j1==n-1)
            return grid[i1][j1];
        
        if(dp[i1][j1][i2][j2]!=-1)
            return dp[i1][j1][i2][j2];
        
        int cherries = 0;
        
        if(i1==i2 && j1==j2)
            cherries += grid[i1][j1];
        else
            cherries += grid[i1][j1] + grid[i2][j2];
        
        int up = helper(i1+1,j1,i2+1,j2,n,grid);
        int right = helper(i1,j1+1,i2,j2+1,n,grid);
        int down = helper(i1,j1+1,i2+1,j2,n,grid);
        int left = helper(i1+1,j1,i2,j2+1,n,grid);
        
        cherries += max(max(left,up),max(right,down));
        
        return dp[i1][j1][i2][j2] = cherries;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int n = grid.size();
        memset(dp,-1,sizeof(dp));
        
        int ans = helper(0,0,0,0,n,grid);
        if(ans<0)
            return 0;
        return ans;
    }
};