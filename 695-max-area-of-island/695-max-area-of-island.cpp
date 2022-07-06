class Solution {
public:
    int dfs(vector<vector<int>>& grid, int i, int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==0)
            return 0;
        
        grid[i][j]=0;
        int a = dfs(grid,i+1,j);
        int b = dfs(grid,i-1,j);
        int c = dfs(grid,i,j+1);
        int d = dfs(grid,i,j-1);
        
        return 1+(a+b+c+d);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    count = max(count,dfs(grid,i,j));
                }
            }
        }
        
        return count;
    }
};