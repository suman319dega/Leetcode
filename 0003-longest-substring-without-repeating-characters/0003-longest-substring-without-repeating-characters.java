class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashMap<Character,Integer> map = new HashMap<>();
        int n = s.length();
        int i = 0, j = 0;
        int max_len = 0;
        while(j < n) {
            if(map.containsKey(s.charAt(j))) {
                i = Math.max(i, map.get(s.charAt(j)) + 1);
            }
            map.put(s.charAt(j),j);
            max_len = Math.max(j-i+1,max_len);
            j++;
        }
        return max_len;
    }
}