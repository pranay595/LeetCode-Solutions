class Solution {
public:
    void helper(vector<int>& nums, vector<vector<int>>& ans, int l, int r){
        if(l==r){
            ans.push_back(nums);
            return;
        }
        else{
            for(int i=l;i<=r;i++){
                swap(nums[l],nums[i]);
                helper(nums,ans,l+1,r);
                swap(nums[l],nums[i]);
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int>> ans;
         helper(nums,ans,0,nums.size()-1);
         return ans;
    }
};