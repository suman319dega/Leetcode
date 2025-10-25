class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size(), len = 0, i = n-1;
        while(i >= 0) {
            if(s[i] == ' ' && len == 0) {
                i--;
            }
            else if(s[i] != ' ') {
                i--;
                len++;
            }
            else break;
        }
        return len;
    }
};