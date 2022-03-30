class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        int row = 0;
        int col = cols-1;
        
        while(row<rows && col>=0){
            int curr = matrix[row][col];
            if(curr==target)
                return true;
            if(curr>target)
                col--;
            else
                row++;
        }
        return false;
    }
};