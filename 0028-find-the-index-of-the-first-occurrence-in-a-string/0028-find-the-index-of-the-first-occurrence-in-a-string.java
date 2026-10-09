class Solution {
    public int strStr(String a, String b) {
        int n = a.length();
        int m = b.length();
        if(m == 0) return 0;
        for(int i=0; i<=n-m; i++) {
            if(a.substring(i,m+i).equals(b)) return i;
        }
        return -1;
    }
}