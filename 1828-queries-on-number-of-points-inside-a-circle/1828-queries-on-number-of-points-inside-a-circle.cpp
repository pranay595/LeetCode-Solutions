class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> count;
        
        int nQ = queries.size();
        int nP = points.size();
        
        for(int i=0;i<nQ;i++){
            int currcount = 0;
            for(int j=0;j<nP;j++){
                int dist = (queries[i][0]-points[j][0])*(queries[i][0]-points[j][0]) + 
                    (queries[i][1]-points[j][1])*(queries[i][1]-points[j][1]);
                
                if(dist<=queries[i][2]*queries[i][2])
                    currcount++; 
                    
            }
            count.push_back(currcount);
        }
        return count;
    }
};