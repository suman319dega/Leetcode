class Solution {
    public int characterReplacement(String s, int k) {
        int count = 0;
        int max_count = 0;
        int max_len = 0;
        int i = 0;
        int[] arr = new int[26];
        for(int j = 0; j < s.length(); j++) {
            arr[s.charAt(j) - 'A']++;
            max_count = Math.max(max_count, arr[s.charAt(j) - 'A']);
            count = j - i + 1;
            while(count - max_count > k) {
                arr[s.charAt(i) - 'A']--;
                i++;
                count = j - i + 1;
            }
            max_len = Math.max(max_len, count);
        }
        return max_len;
    }
}