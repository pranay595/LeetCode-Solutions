class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int termSum = 0;
        int numSum = 0;
        for(int i=0;i<n;i++){
            termSum+=i;
            numSum+=nums[i];
        }
        if(termSum==numSum)
            return nums.size();
        return termSum+n-numSum;
    }
};