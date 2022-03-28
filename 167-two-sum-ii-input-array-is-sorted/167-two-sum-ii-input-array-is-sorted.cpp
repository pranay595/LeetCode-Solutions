class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int st = 0;
        int end = n-1;
        
        while(st<=end){
            if(numbers[st]+numbers[end]==target){
                return {st+1,end+1};
            }
            if(numbers[st]+numbers[end]>target)
                end--;
            else
                st++;
        }
        return {};
    }
};