class Solution {
    public long sumAndMultiply(int n) {
        long a = 0, sum = 0;
        String x = n + "";
        for(int i=0; i<x.length(); i++) {
            char ch = x.charAt(i);
            if(ch != '0') {
                a = a * 10 + ch - '0';
                sum += ch - '0';
            }
        }
        return a * sum;

    }
}