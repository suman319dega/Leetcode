class Solution {
public:
    int sum(int num) {
        int ans = 0;
        while(num != 0) {
            ans += num % 10;
            num = num / 10;
        }
        return ans;
    }

    int addDigits(int num) {
        while(num > 9) {
            int val = sum(num);
            num = val;
        }
        return num;
    }
};