class Solution {
public:
    int reverse(int x) {
        long long temp = x; 
        bool neg = temp < 0;
        if (neg) temp = -temp; 

        long long ans = 0;

        while (temp > 0) {
            int last = temp % 10;
            ans = ans * 10 + last;
            temp /= 10;
            if (ans > INT_MAX) return 0;
        }

        if (neg) ans = -ans;

        return (ans < INT_MIN || ans > INT_MAX) ? 0 : ans;
    }
};
