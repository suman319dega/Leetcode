class Solution {
public:
    bool isThree(int n) {
        int count = 0;
        int i = 1;
        while(i <= n) {
            if(n % i == 0) count += 1;
            i += 1;
        }
        return count == 3;
    }
};