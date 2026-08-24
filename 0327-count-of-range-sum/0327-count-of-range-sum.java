class Solution {
    long count = 0;
    public void mergeSort(long[] prefix, int left, int right,int lower, int upper) {
        if(left >= right)
            return;

        int mid = left + (right - left) / 2;

        mergeSort(prefix, left, mid, lower, upper);
        mergeSort(prefix, mid + 1, right, lower, upper);
        int j = mid + 1;
        int k = mid + 1;

        for(int i = left; i <= mid; i++) {

            while(j <= right && prefix[j] - prefix[i] < lower) {
                j++;
            }

            while(k <= right && prefix[k] - prefix[i] <= upper) {
                k++;
            }

            count += k - j;
        }

        long[] temp = new long[right - left + 1];

        int i = left;
        int p = mid + 1;
        int index = 0;

        while(i <= mid && p <= right) {

            if(prefix[i] <= prefix[p]) {
                temp[index++] = prefix[i++];
            }
            else {
                temp[index++] = prefix[p++];
            }
        }

        while(i <= mid) {
            temp[index++] = prefix[i++];
        }

        while(p <= right) {
            temp[index++] = prefix[p++];
        }

        for(int x = 0; x < temp.length; x++) {
            prefix[left + x] = temp[x];
        }
    }

    public int countRangeSum(int[] nums, int lower, int upper) {

        int n = nums.length;

        long[] prefix = new long[n + 1];

        for(int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }

        count = 0;

        mergeSort(prefix, 0, n, lower, upper);

        return (int) count;
    }
}