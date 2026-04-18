int rev(int n) {
    int num = 0;
    while(n != 0) {
        int last =  n % 10;
        num = num * 10 + last;
        n = n / 10;
    }
    return num;
}


class Solution {
public:
    int mirrorDistance(int n) {
        int x = n;
        int a = rev(x);
        int ans = abs(a - n);
        return ans;
    }
};