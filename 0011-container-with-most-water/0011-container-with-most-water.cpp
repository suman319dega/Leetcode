class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water = INT_MIN;
        int n = height.size();
        int left = 0, right = n-1;
        while(left < right) {
            int w = right - left;
            int h = min(height[left],height[right]);
            max_water = max(max_water,w*h);
            if (height[left] < height[right])
                left++;
            else
                right--;
        }
        return max_water;
    }
};