class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        int end = n-1;
        
        sort(stones.begin(),stones.end());
        
        while(end>0){
            int st1 = stones[end];
            int st2 = stones[end-1];
            
            stones.pop_back();
            stones.pop_back();
            
            if(st1!=st2){
                stones.push_back(st1-st2);
                end--;
                sort(stones.begin(),stones.end());
            }else{
                end-=2;
            }
            
        }
        if(stones.empty())
            return 0;
        
        return stones[0];
    }
};