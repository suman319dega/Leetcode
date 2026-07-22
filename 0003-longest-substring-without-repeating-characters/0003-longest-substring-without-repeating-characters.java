class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashMap<Character,Integer> map = new HashMap<>();
        int n = s.length();
        int i = 0, j = 0;
        int max_len = 0;
        while(j < n) {
            char ch = s.charAt(j);
            if(map.containsKey(ch) && map.get(ch) >= i) i = map.get(ch) + 1;
            map.put(ch,j);
            max_len = Math.max(max_len,(j-i+1));
            j++;
        }
        return (max_len == 0) ? 0 : max_len;
    }
}