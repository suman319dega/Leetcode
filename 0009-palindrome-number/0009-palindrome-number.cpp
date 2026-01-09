class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        long long  temp = 0, ref = x;
        while(ref > 0) {
            int last = ref % 10;
            temp = temp * 10 + last;
            ref = ref / 10;
        }
        return temp == x;
        
    }
};