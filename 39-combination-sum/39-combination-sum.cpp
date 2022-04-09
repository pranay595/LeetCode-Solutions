class Solution {
public:
    void helper(int ind, int target, int n, vector<int>& candidates, vector<int>& ds, vector<vector<int>>& ans){
        if(ind==n){
            if(target==0)
                ans.push_back(ds);
            return;
        }
        
        if(candidates[ind]<=target){
            ds.push_back(candidates[ind]);
            helper(ind,target-candidates[ind],n,candidates,ds,ans);
            ds.pop_back();
        }
        
        helper(ind+1,target,n,candidates,ds,ans);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds;
        vector<vector<int>> ans;
        int n = candidates.size();
        
        helper(0,target,n,candidates,ds,ans);
        
        return ans;
    }
};