int digitsum(int n) {
    int ans = 0;
    while(n != 0) {
        ans += n % 10;
        n = n / 10;
    }
    return ans;
}

class Solution {
public:
    int countEven(int num) {
        int count = 0;
        for(int i=1; i<=num; i++) {
            if((i%2 == 0) && i < 9) count++;
            if(i > 9) {
                int sum = digitsum(i);
                if(sum % 2 == 0) count++;
            }
        }
        return count;
    }
};