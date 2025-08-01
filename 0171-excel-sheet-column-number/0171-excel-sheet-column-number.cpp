class Solution {
public:
    int titleToNumber(string s) {
        int ans = 0;
        for (char ch : s) {
            ans = ans * 26 + (ch - 'A' + 1);
        }
        return ans;
    }
};
