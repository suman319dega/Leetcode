class Solution {
public:
    int reverseBits(int n) {
        long long ans = 0;
        for(int i=0; i<32; i++) {
            int bit = n % 2;
            ans = ans * 2 + bit;
            n = n / 2;
        }
        return ans;
    }
};