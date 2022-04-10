class Solution {
public:
    void helper(int ind, int n, vector<int>& nums, vector<int>& ds, vector<vector<int>>& ans){
        ans.push_back(ds);
            
        for(int i=ind;i<n;i++){
            if(i>ind && nums[i]==nums[i-1]) continue;
            
            ds.push_back(nums[i]);
            helper(i+1,n,nums,ds,ans);
            ds.pop_back();
            // helper(i+1,n,nums,ds,ans);
        }
        // helper(ind+1,n,nums,ds,ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> ds;
        
        helper(0,nums.size(),nums,ds,ans);
        
        return ans;
    }
};