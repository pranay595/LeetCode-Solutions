class Solution {
public:
    bool canTransform(string start, string target) {
        if(start==target)
            return true;
        
        int n = start.size();
        
        queue<pair<char,int>> q1;
        queue<pair<char,int>> q2;
        
        for(int i=0;i<n;i++){
            if(start[i]!='X'){
                q1.push({start[i],i});
            }    
        }
        
        for(int i=0;i<n;i++){
            if(target[i]!='X'){
                q2.push({target[i],i});
            }    
        }
        
        
        if(q1.size()!=q2.size())
            return false;
        
        while(!q1.empty()){
            if(q1.front().first==q2.front().first){
                if(q1.front().first=='L' && q1.front().second<q2.front().second){
                        return false;
                }
                else if(q1.front().first=='R' && q1.front().second>q2.front().second){
                    return false;
                }
                
                else{
                    q1.pop();
                    q2.pop();
                }
            }
            else{
                return false;
            }
        }
        return true;
    }
};