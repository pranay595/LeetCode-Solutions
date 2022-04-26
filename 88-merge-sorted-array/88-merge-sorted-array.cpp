class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        int j = 0;
        
        if(n==0)
            return;
        
        if(m==0){
            for(int i=0;i<n;i++){
                nums1[i]=nums2[i];
            }
            return;
        }
        
        while(i<m){
            if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                swap(nums1[i],nums2[j]);
                sort(nums2.begin(),nums2.end());
                i++;
            }
        }
        
        for(i=m;i<m+n;i++){
            nums1[i]=nums2[j];
            j++;
        }
    }
};