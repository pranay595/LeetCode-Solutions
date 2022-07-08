class Solution {
public:
    
    bool subIsland(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int i, int j){
        if(i<0 or j<0 or i>=grid1.size() or j>=grid1[0].size() or grid2[i][j]==0)
            return true;
        if(!grid1[i][j] && grid2[i][j])
            return false;
        
        grid2[i][j]=0;
        
        bool a = subIsland(grid1, grid2, i+1, j);
        bool b = subIsland(grid1, grid2, i-1, j);
        bool c = subIsland(grid1, grid2, i, j+1);
        bool d = subIsland(grid1, grid2, i, j-1);
        
        return a && b && c && d;
    }
    
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int ans = 0;
        
        int m = grid1.size();
        int n = grid1[0].size();
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid2[i][j]==1 && subIsland(grid1, grid2, i, j)){
                    ans++;
                }
            }
        }
        
        return ans;
    }
};