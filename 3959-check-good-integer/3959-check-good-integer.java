class Solution {
    public boolean checkGoodInteger(int n) {
        long sq_sum = 0, dg_sum = 0;
        while(n != 0) {
            int last = n % 10;
            sq_sum += last * last;
            dg_sum += last;
            n = n / 10;
        }
        return (sq_sum - dg_sum) >= 50;
    }
}