class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int area = 0;
        int maxArea = 0;
        
        int st = 0;
        int end = height.size()-1;
        
        while(st<end){
            
            area = min(height[st],height[end])*(end-st);
            
            maxArea = max(area,maxArea);
            
            if(height[st]<height[end])
                st++;
            else
                end--;
        }
        return maxArea;
    }
};