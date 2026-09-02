class Solution {
    public int trap(int[] arr) {
        int n = arr.length;
        int rain = 0;
        int left = 0, right = n-1;
        int left_max = 0, right_max = 0;
        while(left <= right) {
            if(left_max <= right_max) {
                left_max = Math.max(left_max,arr[left]);
                rain += left_max - arr[left];
                left++;
            }
            else {
                right_max = Math.max(right_max,arr[right]);
                rain += right_max - arr[right];
                right--;
            }
        }
        return rain;
    }
}