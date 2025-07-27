class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int rain = 0,left = 0,right = n-1;
        int left_max = 0,right_max = 0;
        while(left <= right) {
            if(left_max <= right_max) {
                if(height[left] >= left_max) left_max = height[left];
                else rain += left_max - height[left];
                left += 1;
            }
            else {
                if(height[right] >= right_max) right_max = height[right];
                else rain += right_max - height[right];
                right -= 1;
            }
        }
        return rain;
    }
};