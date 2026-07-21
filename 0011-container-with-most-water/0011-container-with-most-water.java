class Solution {
    public int maxArea(int[] arr) {
        int n = arr.length;
        int left = 0, right = n-1;
        int max_water = Integer.MIN_VALUE;
        while(left < right) {
            int w = right - left;
            int h = Math.min(arr[left],arr[right]);
            max_water = Math.max(max_water,w*h);
            if(arr[left] < arr[right]) left++;
            else right--;
        }
        return max_water;
    }
}