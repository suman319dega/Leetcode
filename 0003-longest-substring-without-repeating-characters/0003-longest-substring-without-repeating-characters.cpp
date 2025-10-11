class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int i = 0, j = 0;
        map<char,int> m;
        int max_len = 0;
        while(j < n) {
            if(m.find(s[j]) != m.end()) {
                i = max(m[s[j]] + 1,i);
            }
            int len = j - i + 1;
            max_len = max(len,max_len);
            m[s[j]] = j;
            j++;

        }
        return max_len;
    }
};