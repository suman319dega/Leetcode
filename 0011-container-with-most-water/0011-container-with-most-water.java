class Solution {
    public int maxArea(int[] height) {
        int n = height.length;
        int i = 0, j = n-1;
        int max_water = 0;
        while(i < j) {
            int water = (j-i) * Math.min(height[i],height[j]);
            max_water = Math.max(max_water,water);
            if(height[i] < height[j]) i++;
            else j--;
        }
        return max_water;
    }
}