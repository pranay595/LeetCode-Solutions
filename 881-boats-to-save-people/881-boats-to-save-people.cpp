class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int count = 0;
        sort(people.begin(),people.end());
        int n = people.size();
        
        int st = 0;
        int end = n-1;
        
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