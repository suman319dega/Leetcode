class Solution {
public:
    int getLucky(string s, int k) {
        string ans = "";
        for (char ch : s) {
            ans += to_string(ch - 'a' + 1);
        }

        int count = 0;
        while (count < k) {
            int n = 0;
            for (char c : ans) {
                n += c - '0';
            }
            ans = to_string(n);
            count++;
        }

        return stoi(ans);
    }
};
