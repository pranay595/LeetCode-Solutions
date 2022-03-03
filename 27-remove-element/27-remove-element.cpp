class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
               nums[i]=-1;
                int temp = nums[i];
                nums[i]=nums[nums.size()-1-count];
                nums[nums.size()-1-count]=temp;
                i--;
                count++;
            }
        }
        return(nums.size()-count);
    }
};