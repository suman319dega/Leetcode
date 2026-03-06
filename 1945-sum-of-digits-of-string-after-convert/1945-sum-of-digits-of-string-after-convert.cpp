class Solution {
public:
    int getLucky(string s, int k) {
        string ans = "";
        for(char ch : s) {
            ans += to_string(ch - 'a' + 1);
        }
        while(k-- != 0) {
            int n = 0;
            for(char ch : ans) {
                n += ch - '0';
            }
            ans = to_string(n);
        }
        return stoi(ans);
    }
};