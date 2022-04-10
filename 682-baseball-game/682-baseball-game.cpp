class Solution {
public:
    int calPoints(vector<string>& ops) {
        int score = 0;
        int n = ops.size();
        
        vector<int> s(n);
        
        for(int i=0;i<n;i++){
            if(ops[i]=="C"){
                s.pop_back();
            }
            
            else if(ops[i]=="D"){
                s.push_back(s[s.size()-1]*2);
            }
            
            else if(ops[i]=="+"){
                s.push_back(s[s.size()-1]+s[s.size()-2]);
            }
            
            else{
                s.push_back(stoi(ops[i]));
            }
            
        }
        
        for(int i=0;i<s.size();i++){
            score+=s[i];
        }
        
        
        return score;
    }
};