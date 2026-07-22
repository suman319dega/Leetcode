class Solution {
    public int trap(int[] arr) {
        int n = arr.length;
        int leftmax = 0, rightmax = 0;
        int left = 0, right = n-1;
        int rain = 0;
        while(left <= right) {
            if(leftmax <= rightmax) {
                if(arr[left] > leftmax) {
                    leftmax = arr[left];
                }
                else rain += (leftmax - arr[left]);
                left++;
            }
            else {
                if(arr[right] > rightmax) {
                    rightmax = arr[right];
                }
                else rain += (rightmax - arr[right]);
                right--;
            }
        }
        return rain;
    }
}