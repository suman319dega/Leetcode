class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        Arrays.sort(nums1);
        Arrays.sort(nums2);
        int n = nums1.length;
        int m = nums2.length;
        ArrayList<Integer> arr = new ArrayList<>();
        int i = 0, j = 0;
        while(i < n && j < m) {
            if(nums1[i] == nums2[j]) {
                if(arr.isEmpty() || arr.get(arr.size() - 1) != nums1[i]) arr.add(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i] < nums2[j]) {
                i++;
            }
            else {
                j++;
            }
        }

        int x = arr.size();
        int v[] = new int[x];
        for(int k=0; k<x; k++) {
            v[k] = arr.get(k);
        }
        return v;
    }
}