class Solution {
public:
    bool isSafe(int row, int col, vector<string>& board, int n){
        for(int i=0;i<col;i++){
            if(board[row][i]=='Q')
                return false;
        }
        
        int x = row;
        int y = col;
        while(x>=0 && y>=0){
            if(board[x][y]=='Q')
                return false;
            y--;
            x--;
        }
        
        x = row;
        y = col;
        while(x<n && y>=0){
            if(board[x][y]=='Q')
                return false;
            x++;
            y--;
        }
        
        return true;
    }
    
    void solve(int col, vector<string>& board, int n, int& count){
        if(col==n){
            count++;
            return;
        }
        
        for(int row=0;row<n;row++){
            if(isSafe(row,col,board,n)){
                board[row][col]='Q';
                solve(col+1,board,n,count);
                board[row][col]='.';
            }
        }
    }
    
    int totalNQueens(int n) {
        vector<string> board(n);
        
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        int count = 0;
        
        solve(0,board,n,count);
        
        return count;
    }
};