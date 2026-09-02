class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        int n = nums1.length;
        int ans[] = new int[n];
        for(int j=0; j<n; j++) {
            int x = nums2.length;
            int id = 0;
            for(int i=0; i<x; i++) {
                if(nums2[i] == nums1[j]) {
                    id = i;
                    break;
                }
            }
            int a = -1;
            if(id == x-1) ans[j] = a;
            for(int k=id; k<x-1; k++) {
                if(nums2[k+1] > nums2[id]) {
                    a = nums2[k+1];
                    break;
                }
            }
            ans[j] = a;

        }
        return ans;
    }
}