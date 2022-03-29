class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int n = nums.size();
        
        int count = 0;
            for(int i=0;i<n-1;i++){
                if(nums[i]==nums[i+1] && (i-count)%2==0){
                    count++;
                }
            }
                
            return count + (n-count)%2;
    }
};