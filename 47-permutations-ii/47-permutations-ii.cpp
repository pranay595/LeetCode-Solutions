class Solution {
public:
    void helper(vector<int>& nums, vector<vector<int>> &ans, int l, int r){
        if(l==r){
            vector<vector<int>> :: iterator it;
            it = find(ans.begin(),ans.end(),nums);
            if(it==ans.end())
            ans.push_back(nums);
            return;
        }
        
        for(int i=l;i<=r;i++){
            swap(nums[l],nums[i]);
            helper(nums,ans,l+1,r);
            swap(nums[l],nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        helper(nums,ans,0,nums.size()-1);
        return ans;
    }
};