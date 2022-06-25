class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        
        vector<vector<int>> arr;
        arr.push_back(nums);
        
        for(int i=1;i<n;i++){
            vector<int> temp;
            for(int j=0;j<n-i;j++){
                temp.push_back(arr[i-1][j]%10+arr[i-1][j+1]%10);
            }
            arr.push_back(temp);
        }
        int ans = arr[n-1][0]%10;
        return ans;
    }
};