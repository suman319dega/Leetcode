class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for(int num : nums) {
            map.put(num, map.getOrDefault(num, 0) + 1);
        }
        HashSet<Integer> set = new HashSet<>();

        for(int num : nums) {
            set.add(num);
        }
        ArrayList<Integer> list = new ArrayList<>(set);
        Collections.sort(list, (a, b) -> map.get(b) - map.get(a));
        int[] ans = new int[k];
        int i = 0;
        for(int num : list) {
            if(i == k) {
                break;
            }

            ans[i++] = num;
        }
        return ans;
    }
}