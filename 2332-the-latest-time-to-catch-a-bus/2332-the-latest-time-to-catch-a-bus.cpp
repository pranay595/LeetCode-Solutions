class Solution {
public:
    int latestTimeCatchTheBus(vector<int>& buses, vector<int>& passengers, int capacity) {
        int n = buses.size();
        int m = passengers.size();
        
        sort(buses.begin(),buses.end());
        sort(passengers.begin(),passengers.end());
        
        int j = 0;
        int i = 0;
        while(j<n){
            int temp = capacity;
            while(i<m && temp && passengers[i]<=buses[j]){
                i++;
                temp--;
            }
            j++;
            if(j==n)
                capacity = temp;
        }
        
        
        
        if(capacity!=0){
            if(i>0)
            if(buses[j-1]==passengers[i-1])
                return buses[j-1]-1;
                
            return buses[j-1];
        }
            
            set<int> pass(passengers.begin(),passengers.begin()+i);
            int ans = passengers[i-1];
            
            while(ans){
                if(!pass.count(ans))
                    return ans;
                ans--;
            }
         
        return passengers[0]-1;
    }
};