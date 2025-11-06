class Solution {
public:
    long long coloredCells(int n) {
        return 1LL + 2LL * n *(n-1);
    }
};