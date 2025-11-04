class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int i = 0;
        map<char,int> m;
        int max_len = 0;
        for(int j=0; j<n; j++) {
            if(m.find(s[j]) != m.end() && m[s[j]] >= i) {
                i = m[s[j]] + 1;
            }
            m[s[j]] = j;
            max_len = max(max_len,j-i+1);
        }
        return max_len;
    }
};