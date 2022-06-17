class Solution {
public:
    int maximumNonAdjacentSum(vector<int> &nums){
    int n = nums.size();
    
    int prev = nums[0];
    int prev2 = 0;
    
    for(int i=1;i<n;i++){
        int pick = nums[i];
        if(i>1)
            pick = nums[i]+prev2;
        int notPick = prev;
        int curri = max(pick,notPick);
        prev2 = prev;
        prev = curri;
    }
    return prev;
}
    int rob(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        
        vector<int> temp1(nums.begin(),nums.end()-1);
        vector<int> temp2(nums.begin()+1,nums.end());
        
        return max(maximumNonAdjacentSum(temp1),maximumNonAdjacentSum(temp2));

        
    }
};