class Solution {
public:
    int minPartitions(string n) {
        int size = n.size();
        int maxi = 0;
        for(auto i:n){
            maxi = max(maxi,i-'0');
        }
        return maxi;
    }
};