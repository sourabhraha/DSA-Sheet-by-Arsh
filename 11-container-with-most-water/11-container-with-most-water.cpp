class Solution {
public:
    int maxArea(vector<int>& height) {
     
        int ans = 0;
        int i=0, j = height.size()-1;
        
    
        while(j > i)
        {
            int area = min(height[i], height[j]) * (j-i);
            ans = max(ans, area);
            if(height[i] >= height[j])
                j--;
            else 
                i++;
                
        }
        return ans;
    }
};