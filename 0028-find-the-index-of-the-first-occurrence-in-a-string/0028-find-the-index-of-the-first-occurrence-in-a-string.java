class Solution {
    public int strStr(String haystack, String needle) {
        int n = needle.length();
        int m = haystack.length();

        if (n == 0) return 0;

        for (int j = 0; j <= m - n; j++) {
            if (haystack.substring(j, j + n).equals(needle))
                return j;
        }
        return -1;
    }
}