class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_len = 0, i = 0;
        map<int,int> m;
        for(int j=0; j<s.size(); j++) {
            if(m.find(s[j]) != m.end() && m[s[j]] >= i) {
                i = m[s[j]] + 1;
            }
            m[s[j]] = j;
            max_len = max(max_len,j-i+1);
        }
        return max_len;
    }
};