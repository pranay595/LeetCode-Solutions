class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums2.size();
        for(int i=0;i<m;i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int n = nums1.size();
        if(n%2==0){
            int mid = n/2;
            return (double)(nums1[mid]+nums1[mid-1])/2.00000;
        }
        
        return nums1[n/2];
    }
};