class Solution {
public:
    void helper(int ind, vector<int>& ds, vector<int>& nums, vector<vector<int>>& ans, int n){
        if(ind==n){
            ans.push_back(ds);
            return;
        }
        
        ds.push_back(nums[ind]);
        helper(ind+1,ds,nums,ans,n);
        ds.pop_back();
        helper(ind+1,ds,nums,ans,n);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        
        vector<int> ds;
        
        helper(0,ds,nums,ans,n);
        return ans;
    }
};