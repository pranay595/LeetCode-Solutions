class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        map<int,int> mp;
        map<int,int> sol;
        for(int i=0;i<n;i++){
            ++mp[arr[i]];
        }
        for(auto i:mp){
            ++sol[i.second];
        }
        for(auto i:sol){
            if(i.second>1)
                return false;
        }
        return true;
    }
};