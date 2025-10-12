class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int max_area = INT_MIN;
        int left = 0, right = n - 1;
        while(left <= right) {
            int width = right - left;
            int hight = min(height[left] , height[right]);
            max_area = max(max_area,hight*width);
            if(height[left] <= height[right]){
                left++;
            }
            else {
                right--;
            }
        }
        return max_area;
    }
};