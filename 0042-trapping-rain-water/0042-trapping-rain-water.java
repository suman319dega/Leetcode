class Solution {
    public int trap(int[] arr) {
        int n = arr.length;
        int rain = 0;
        int left = 0, right = n-1;
        int left_max = 0, right_max = 0;
        while(left <= right) {
            if(left_max <= right_max) {
                if(left_max < arr[left]) {
                    left_max = arr[left];
                }
                else rain += left_max - arr[left];
                left++;
            }
            else {
                if(right_max < arr[right]) {
                    right_max = arr[right];
                }
                else rain += right_max - arr[right];
                right--;
            }
        }
        return rain;
    }
}