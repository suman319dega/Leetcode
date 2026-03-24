class Solution {
public:
    bool isFascinating(int n) {
        long long num1 = 2 * n, num2 = 3*n;
        long long ans = 0;
        while(n != 0) {
            ans = ans * 10 + (n % 10);
            n = n / 10;
        }
        while(num1 != 0) {
            ans = ans * 10 + (num1 % 10);
            num1 = num1 / 10;
        }
        while(num2 != 0) {
            ans = ans * 10 + (num2 % 10);
            num2 = num2 / 10;
        }
        vector<int> v(10);
        while(ans != 0) {
            int last = ans % 10;
            if(last <= 0 ) return false;
            else v[last]++;
            ans = ans / 10;
        }
        for(int i=1; i<10; i++) {
            if(v[i] != 1) return false;
        }
        return true;
    }
};