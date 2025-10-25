class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n-1, left_max = 0, right_max = 0;
        int rain = 0;
        while(left <= right) {
            if(left_max <= right_max) {
                if(height[left] > left_max) left_max = height[left];
                rain += left_max - height[left++]; 
            }
            else {
                if(height[right] > right_max) right_max = height[right];
                rain += right_max - height[right--];
            }
        }
        return rain;
    }
};