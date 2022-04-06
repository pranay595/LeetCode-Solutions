class Solution {
public:
    void helper(vector<int>& nums, vector<vector<int>> &ans, int l, int r){
        if(l==r){
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
        
        set<vector<int>> st;
        int n = ans.size();
        
        for(int i=0;i<n;i++){
            st.insert(ans[i]);
        }
        
        ans.clear();
        
        for(auto i:st){
            ans.push_back(i);
        }
        
        return ans;
    }
};