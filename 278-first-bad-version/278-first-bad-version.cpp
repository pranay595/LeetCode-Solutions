// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int st = 0;
        int end = n;
        while(st<end){
            int mid = st + (end-st)/2;
            
            bool bad = isBadVersion(mid);
            if(bad)
                end = mid;
            else
                st = mid+1;
        }
        return st;
    }
};