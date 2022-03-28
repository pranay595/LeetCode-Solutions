class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set st1(nums1.begin(),nums1.end());
        unordered_set st2(nums2.begin(),nums2.end());
        
        vector<int> intersection;
        
        for(auto i:st2){
            if(st1.count(i))
                intersection.push_back(i);
        }
        
        return intersection;
    }
};