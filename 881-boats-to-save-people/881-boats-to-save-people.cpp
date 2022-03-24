class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int count = 0;
        sort(people.begin(),people.end());
        
        int st = 0;
        int end = people.size()-1;
        
        while(st<=end){
            if(people[st]+people[end]<=limit){
                st++;
                end--;
                count++;
            }
            else{
                end--;
                count++;
            }
        }
        return count;
    }
};