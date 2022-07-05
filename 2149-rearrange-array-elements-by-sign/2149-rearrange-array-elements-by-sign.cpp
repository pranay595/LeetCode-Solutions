class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> a1;
        vector<int> a2;
        
        for(int i=0;i<n;i++){
            if(nums[i]<0)
                a1.push_back(nums[i]);
            else
                a2.push_back(nums[i]);
        }
        
        int i=0;
        int j = 0 ;
        int k = 0;
        while(i<n){
            nums[i] = a2[j];
            i++;
            j++;
            nums[i] = a1[k];
            i++;
            k++;
        }
        return nums;
    }
};