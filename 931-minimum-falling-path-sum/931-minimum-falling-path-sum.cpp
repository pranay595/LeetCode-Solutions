class Solution {
public:
    int helper(int i, int j, int n, int m, vector<vector<int>>& matrix,vector<vector<int>>& dp){
        if(j<0 || j>=m)
            return 1e9;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        if(i==0)
            return matrix[i][j];
    
        int up = matrix[i][j] + helper(i-1,j,n,m,matrix,dp);
        int left = matrix[i][j] + helper(i-1,j-1,n,m,matrix,dp);
        int right = matrix[i][j] + helper(i-1,j+1,n,m,matrix,dp);
        
        return dp[i][j] = min(up,min(left,right));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        vector<int> temp(m,0);
        
        vector<vector<int>> dp(n,vector<int>(m,-1));
        for(int j=0;j<m;j++){
            int s = helper(n-1,j,n,m,matrix,dp);
            temp[j] = s;
        }
        sort(temp.begin(),temp.end());
        return temp[0];
    }
};