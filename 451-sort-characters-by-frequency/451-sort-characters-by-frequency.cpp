class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        
        unordered_map<char,int> mp;
        
        for(int i=0;i<n;i++) ++mp[s[i]];
        
        priority_queue<pair<int,char>> pq;
        
        for(auto i:mp){
            int freq = i.second;
            char val = i.first;
            pq.push({freq,val});
        }
        
        string ans;
        
        while(!pq.empty()){
            auto temp = pq.top();
            int freq = temp.first;
            while(freq){
                ans.push_back(temp.second);
                freq--;
            }
            pq.pop();
        }
        
        return ans;
    }
};