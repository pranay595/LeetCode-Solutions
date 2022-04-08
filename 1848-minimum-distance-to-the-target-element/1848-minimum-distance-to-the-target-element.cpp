class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n = nums.size();
        int dist = INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                dist = min(dist,abs(i-start));
            }
        }
        return dist;
    }
};