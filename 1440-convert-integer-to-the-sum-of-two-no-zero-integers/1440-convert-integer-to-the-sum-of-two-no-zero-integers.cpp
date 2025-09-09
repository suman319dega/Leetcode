bool nozero(int n) {
    while(n > 0) {
        if(n % 10 == 0) return false;
        n = n / 10;
    }
    return true;
}

class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        int a = 1, b = n-1;
        while(a <= n) {
            if(nozero(a) && nozero(b)) {
                return {a,b};
            }
            a++,b--;
        }
        return {};
    }
};