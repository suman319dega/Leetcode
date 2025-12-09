class Solution {
public:
    int reverse(int x) {
        long long n = x;
        bool  neg = n < 0;
        if(neg) n = -1 * n;
        long long temp = 0;
        while(n > 0) {
            int last = n % 10;
            temp = temp * 10 + last;
            n = n / 10;
        }
        if(temp > INT_MAX || temp < INT_MIN) return 0;
        if(neg) return -1 * temp;
        return temp;
    }
};