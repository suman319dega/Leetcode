class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashMap<Integer,Integer> m = new HashMap<>();
        for(int num : nums) {
            if(m.containsKey(num)) return true;
            m.put(num,m.getOrDefault(num,0)+1);
        }
        return false;
    }
}