class Solution {
public:
    int minSteps(string s, string t) {
        int n = s.size();
        unordered_map<char,int> mp;
        
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            mp[t[i]]--;
        }
        
        int count = 0;
        
        for(auto i:mp){
            if(i.second>0)
                count+=i.second;
        }
        
        return count;
        
    }
};