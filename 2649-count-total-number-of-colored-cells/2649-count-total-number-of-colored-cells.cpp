class Solution {
public:
    long long coloredCells(int n) {
        long long var = n;
        return var * var + (var - 1) * (var - 1); 
    }
};