class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        int n = nums1.length;
        int ans[] = new int[n];
        for(int i=0; i<n; i++) {
            int id = -1;
            int nxt = -1;
            for(int j=0; j<nums2.length; j++) {
                if(nums2[j] == nums1[i]) {
                    id = j;
                    break;
                };
            }
            for(int j=id+1; j<nums2.length; j++) {
                if(nums2[j] > nums1[i]) {
                    nxt = nums2[j];
                    break;
                }
            }
            ans[i] = nxt;
        }
        return ans;
    }
}