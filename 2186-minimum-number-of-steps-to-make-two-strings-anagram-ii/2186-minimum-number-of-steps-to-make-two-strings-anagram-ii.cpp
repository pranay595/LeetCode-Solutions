class Solution {
public:
    int minSteps(string s, string t) {
        int n = s.size();
        int m = t.size();
        unordered_map<char,int> mp;
        
        for(int i=0;i<n;i++)
            mp[s[i]]++;
        
        for(int i=0;i<m;i++)
            mp[t[i]]--;
        
        int count = 0;
        
        for(auto i:mp){
                count += abs(i.second);
        }
        
        return count;
        
    }
};