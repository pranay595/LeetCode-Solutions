class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans;
        for(int i=0;i<=rowIndex;i++){
            vector<int> row;
            row.push_back(1);
            for(int j=1;j<i;j++){
                row.push_back(ans[i-1][j]+ans[i-1][j-1]);
            }
            if(i>0) row.push_back(1);
            ans.push_back(row);
        }
        return ans[rowIndex];
    }
};