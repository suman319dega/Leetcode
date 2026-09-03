class Solution {
    public int totalWaviness(int num1, int num2) {
        int count = 0;
        for(int i=num1; i<=num2; i++) {
            char[] ch = String.valueOf(i).toCharArray();
            int n = ch.length;
            if(n < 3) continue;
            for(int j=1; j<n-1; j++) {
                boolean peak = ch[j] > ch[j-1] && ch[j] > ch[j+1];
                boolean valley = ch[j] < ch[j-1] && ch[j] < ch[j+1];
                if(peak || valley) count++;
            }
        }
        return count;
    }
}