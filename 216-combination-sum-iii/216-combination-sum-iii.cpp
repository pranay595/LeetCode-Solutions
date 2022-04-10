class Solution {
public:
    void helper(int ind, int k, int n, vector<int>& ds, vector<vector<int>>& ans){
        if(ds.size()==k && n==0){
            ans.push_back(ds);
        }
        
        for(int i=ind;i<10;i++){
            if(i>n) break;
            ds.push_back(i);
            helper(i+1,k,n-i,ds,ans);
            ds.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> ds;
        vector<vector<int>> ans;
        
        
        helper(1,k,n,ds,ans);
        
        return ans;
    }
};