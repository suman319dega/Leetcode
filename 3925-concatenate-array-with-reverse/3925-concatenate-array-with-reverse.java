class Solution {
    public int[] concatWithReverse(int[] nums) {
        int n = nums.length;
        int arr[] = new int[2*n];
        int i = 0;
        for(int j=0; j<n; j++) {
            arr[i++] = nums[j];
        }
        for(int j=n-1; j>=0; j--) {
            arr[i++] = nums[j];
        }
        return arr;
    }
}