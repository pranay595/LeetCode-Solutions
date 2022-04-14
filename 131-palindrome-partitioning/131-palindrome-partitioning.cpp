class Solution {
public:
    vector<vector<string>> ans;
    
    bool isPalindrome(string s, int st, int end){
        while(st<=end){
            if(s[st++]!=s[end--])
                return false;
        }
        return true;
    }
    
    void helper(int ind, int n, vector<string>& path, string s){
        if(ind==n){
            ans.push_back(path);
            return;
        }
        
        for(int i=ind;i<n;i++){
            if(isPalindrome(s,ind,i)){
                path.push_back(s.substr(ind,i-ind+1));
                helper(i+1,n,path,s);
                path.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<string> path;
        
        int n = s.size();
        
        helper(0,n,path,s);
        
        return ans;
    }
};