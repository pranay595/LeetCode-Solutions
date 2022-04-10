class Solution {
public:
    void helper(int ind, int target, int n, vector<int>& ds, vector<int>& candidates, vector<vector<int>>& ans){
        if(target==0)
            ans.push_back(ds);
        
        for(int i=ind;i<n;i++){
            if(i>ind && candidates[i]==candidates[i-1]) continue;
            if(candidates[i]>target) break;
            
            ds.push_back(candidates[i]);
            helper(i+1,target-candidates[i],n,ds,candidates,ans);
            ds.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        
        sort(candidates.begin(),candidates.end());
        int n = candidates.size();
        
        helper(0,target,n,ds,candidates,ans);
        
        return ans;
    }
};