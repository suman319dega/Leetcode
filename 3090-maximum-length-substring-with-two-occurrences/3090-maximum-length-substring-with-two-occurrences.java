class Solution {
    public int maximumLengthSubstring(String s) {
        int i = 0,j = 0;
        int n = s.length();
        int max_len = 0;
        int arr[] = new int[26];
        while(j < n) {
            char ch = s.charAt(j);
            arr[ch - 'a']++;
            while(arr[ch - 'a'] > 2) {
                arr[s.charAt(i) - 'a']--;
                i++;
            }
            max_len = Math.max(max_len,j-i+1);
            j++;
        }
        return max_len;
    }
}