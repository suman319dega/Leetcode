class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        ArrayList<Integer> list = new ArrayList<>();
        int n1 = nums1.length, n2 = nums2.length;
        int i = 0, j = 0;
        Arrays.sort(nums1);
        Arrays.sort(nums2);
        while(i < n1 && j < n2) {
            if(nums1[i] == nums2[j]) {
                if(list.isEmpty()) list.add(nums1[i]);
                else {
                    if(list.get(list.size() - 1) != nums1[i]) list.add(nums1[i]);
                }
                i++;
                j++;
            }
            else if(nums1[i] < nums2[j]) i++;
            else if(nums2[j] < nums1[i]) j++;
        }

        int[] result = new int[list.size()];
        for (int x = 0; x < list.size(); x++) {
            result[x] = list.get(x);
        }
        return result;
    }
}