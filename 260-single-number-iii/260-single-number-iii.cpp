class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
         int n = nums.size();
        
        long long a = nums[0];
        
        for(int i=1;i<n;i++){
            a^=nums[i];
        }
        
        int rightSetBit = (a & ~(a-1));
        
        int first = 0;
        int second = 0;
        
        for(int i=0;i<n;i++){
            if((nums[i] & rightSetBit) !=0)
                first^=nums[i];
            else
                second^=nums[i];
        }
        
            return {first,second};
        
    
    }
};