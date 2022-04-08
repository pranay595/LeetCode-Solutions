class Solution {
public:
    bool isSubseq(string s, string t){
        int n = s.size();
        int m = t.size();
        int j=0;
        
        for(int i=0;i<m && j<n;i++){
            if(s[j]==t[i])
                j++;
        }
        
        return (j==n);
    }
    int numMatchingSubseq(string s, vector<string>& words) {
        int count = 0;
        int n = words.size();
        
        unordered_map<string,int> mp;
        
        for(int i=0;i<n;i++){
            ++mp[words[i]];
        }
        
        for(auto i:mp){
            if(isSubseq(i.first,s))
                count+=i.second;
        }
        
        return count;
    }
};