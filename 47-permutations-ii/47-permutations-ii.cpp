class Solution {
public:
    void helper(vector<int>& nums, set<vector<int>> &st, int l, int r){
        if(l==r){
            st.insert(nums);
            return;
        }
        
        for(int i=l;i<=r;i++){
            swap(nums[l],nums[i]);
            helper(nums,st,l+1,r);
            swap(nums[l],nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        set<vector<int>> st;
        helper(nums,st,0,nums.size()-1);
        
        
        /* unordered_set<vector<int>> st will give an error, I found reason for it on stacoverflow --
        It's because unordered_set is using std::hash template to compute hash for its entries and there is no std::hash for pairs. You have to define custom hash to use unordered_set.
        */ 
        
        vector<vector<int>> ans;
        
        for(auto i:st){
            ans.push_back(i);
        }
        
        return ans;
    }
};