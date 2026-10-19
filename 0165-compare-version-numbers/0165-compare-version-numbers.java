class Solution {
    public int compareVersion(String s1, String s2) {
        int a = s1.length(),b = s2.length();
        int i = 0, j = 0;
        while(i < a || j < b) {
            long x = 0, y = 0;
            while(i < a && s1.charAt(i) != '.') {
                x = x * 10 + s1.charAt(i) - '0';
                i++;
            }
            while(j < b && s2.charAt(j) != '.') {
                y = y * 10 + s2.charAt(j) - '0';
                j++;
            }
            if(x < y) return -1;
            if(x > y) return 1;
            i++;
            j++;
        }
        return 0;
    }
}