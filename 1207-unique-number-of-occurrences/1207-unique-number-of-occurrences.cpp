class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> mp;
        set<int> sol;
        for(int i=0;i<n;i++){
            ++mp[arr[i]];
        }
        for(auto i:mp){
            if(sol.count(i.second))
                return false;
            else
                sol.insert(i.second);
        }
        return true;
    }
};