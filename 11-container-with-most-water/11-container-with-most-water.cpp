class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int b = 0;
        
        int area = 0;
        int maxArea = 0;
        
        int st = 0;
        int end = height.size()-1;
        
        while(st<end){
            l = min(height[st],height[end]);
            b = end-st;
            
            area = l*b;
            
            maxArea = max(area,maxArea);
            
            if(height[st]<height[end])
                st++;
            else
                end--;
        }
        return maxArea;
    }
};