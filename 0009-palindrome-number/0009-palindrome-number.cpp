class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int temp = x;
        long long  ans = 0;
        while(temp) {
            int last = temp % 10;
            ans = ans * 10 + last;
            temp = temp / 10;
        }
        return ans == x;
    }
};