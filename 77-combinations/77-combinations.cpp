class Solution {
public:
    void helper(int ind, int k, int n, vector<int>& ds, vector<int>& set, vector<vector<int>>& ans){
        if(ind==n){
            if(ds.size()==k){
                ans.push_back(ds);
            }
            return;
        }
        
        ds.push_back(set[ind]);
        helper(ind+1,k,n,ds,set,ans);
        ds.pop_back();
        helper(ind+1,k,n,ds,set,ans);
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<int> set;
        for(int i=1;i<=n;i++){
            set.push_back(i);
        }
        
        vector<vector<int>> ans;
        vector<int> ds;
        
        helper(0,k,n,ds,set,ans);
        
        return ans;
    }
};