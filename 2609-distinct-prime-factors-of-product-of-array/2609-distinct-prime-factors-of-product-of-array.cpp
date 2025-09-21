class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        unordered_set<int> primes;

        for (int num : nums) {
            int x = num;
            for (int i = 2; i * i <= x; i++) {
                while (x % i == 0) {
                    primes.insert(i);
                    x /= i;
                }
            }
            if (x > 1) primes.insert(x);
        }

        return primes.size();
    }
};
