class Solution {
    public boolean sumGame(String num) {
        int n = num.length();
        int sum1 = 0, sum2 = 0, x1 = 0, x2 = 0;
        for(int i=0; i<n/2; i++) {
            char ch = num.charAt(i);
            if(ch == '?') x1++;
            else sum1 += ch - '0';
        }
        for(int i=n/2; i<n; i++) {
            char ch = num.charAt(i);
            if(ch == '?') x2++;
            else sum2 += ch - '0';
        }
        int diff = sum1 - sum2;
        return (2 * diff) != (9 * (x2 - x1));
    }
}