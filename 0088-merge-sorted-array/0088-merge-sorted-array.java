class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int x = (m+n);
        int arr[] = new int[x];
        int a = 0;
        for(int i=0; i<m; i++) {
            arr[a++] = nums1[i];
        }
        for(int i=0; i<n; i++) {
            arr[a++] = nums2[i];
        }

        Arrays.sort(arr);
        for(int i=0; i<x; i++) {
            nums1[i] = arr[i];
        }
    }
}