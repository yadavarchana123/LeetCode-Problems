class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j=height.size()-1, water = 0;
        while(i < j){
            int h = min(height[i], height[j]);
            water = max(water, h*(j-i));
            while(height[i] <= h and i<j)
                i++;
            while(height[j] <= h and j>i)
                j--;
        }
        return water;
    }
};