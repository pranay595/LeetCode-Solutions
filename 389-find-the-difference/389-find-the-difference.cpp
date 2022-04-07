class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum =0;
        for(int i=0;i<s.size();i++){
            t[i+1] += (t[i]-s[i]);
        }
        return t[s.size()];
    }
};