class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        
        int st = 0;
        int end = height.size()-1;
        
        while(st<end){
            
            maxArea = max(min(height[st],height[end])*(end-st),maxArea);
            
            if(height[st]<height[end])
                st++;
            else
                end--;
        }
        return maxArea;
    }
};