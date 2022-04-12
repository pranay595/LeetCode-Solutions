// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void helper(int col, vector<int>& board, vector<vector<int>>& ans, int n, vector<int>& rows,
    vector<int>& lowerDiagonal, vector<int>& upperDiagonal){
        if(board.size()==n){
            ans.push_back(board);
            return;
        }
        
        for(int row=0;row<n;row++){
            if(rows[row]==0 && lowerDiagonal[row+col]==0 && upperDiagonal[n-1+col-row]==0){
                rows[row] = 1;
                lowerDiagonal[row+col] = 1;
                upperDiagonal[n-1+col-row] = 1;
                
                board.push_back(row+1);
                
                helper(col+1,board,ans,n,rows,lowerDiagonal,upperDiagonal);
                
                board.pop_back();
                
                rows[row] = 0;
                lowerDiagonal[row+col] = 0;
                upperDiagonal[n-1+col-row] = 0;
            }
        }   
    }

    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>> ans;
        vector<int> board;
        
        vector<int> rows(n,0), lowerDiagonal(2*n-1,0), upperDiagonal(2*n-1,0);
        
        helper(0,board,ans,n,rows,lowerDiagonal,upperDiagonal);
        
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends