class Solution {
    public int gcdOfOddEvenSums(int n) {
        int even = 0;
        int odd = 0;
        for(int i=1; i<=n*2; i++) {
            if(i % 2 == 0) even += i;
            else odd += i;
        }
        while(even != 0) {
            int temp = even;
            even = odd % even;
            odd = temp;
        }
        return odd;
    }
}