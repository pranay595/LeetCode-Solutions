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
        /* unordered_set<vector<int>> st will give an error, I found reason for it on stacoverflow --
        It's because unordered_set is using std::hash template to compute hash for its entries and there is no std::hash for pairs. You have to define custom hash to use unordered_set.
        */ 
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