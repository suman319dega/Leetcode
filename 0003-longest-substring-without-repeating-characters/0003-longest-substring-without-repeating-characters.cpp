class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        map<char,int> m;
        int i = 0, j = 0;
        int maxlen = 0;
        while(j < n) {
            if(m.find(s[j]) != m.end()) {
                i = max(m[s[j]] + 1,i);
            }
            int len = j - i + 1;
            maxlen = max(len,maxlen);
            m[s[j]] = j;
            j++;
        }
        return maxlen;
    }
};