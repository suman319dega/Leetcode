class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> v1(26,0), v2(26,0);
        for(char ch : s) {
            v1[ch - 'a'] += 1;
        }
        for(char ch : t) {
            v2[ch - 'a'] += 1;
        }
        int ans = 0;
        for (int i = 0; i < 26; i++) {
            if (v2[i] > v1[i]) {
                ans += (v2[i] - v1[i]);
            }
        }
        return ans;
    }
};