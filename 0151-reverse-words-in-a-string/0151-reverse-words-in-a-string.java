class Solution {
    public String reverseWords(String s) {
        String x[] = s.trim().split("\\s+");
        String ans = "";
        int n = x.length;
        for(int i=n-1; i>0; i--) {
            ans += x[i] + " ";
        }
        ans += x[0];
        return ans;
    }
}