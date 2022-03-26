class Solution {
public:
    bool checkPerfectNumber(int num) {
           vector<int> nums = {6, 28, 496, 8128, 33550336};
        for(int i=0;i<nums.size();i++){
            if(num==nums[i]){
                return 1;
            }
        }
        return 0; 
    }
};