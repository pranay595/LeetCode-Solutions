class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n =nums.size();
        vector<int> ans(n+1,0);
        
        for(int i=1;i<n+1;i++){
            ans[nums[i-1]]++;
        }
        
        for(int i=1;i<n+1;i++){
            if(ans[i]>1)
                return i;
        }
        
        return -1;
    }
};