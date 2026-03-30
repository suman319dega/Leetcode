class Solution {
public:
    bool isPalindrome(string s) {
        string x = "";
        for(int i=0; i<s.size(); i++) {
            if(isalnum(s[i])) x += tolower(s[i]);
        }
        int low = 0, high = x.size() - 1;
        while(low < high) {
            if(x[low] != x[high]) return false;
            low++,high--;
        }
        return true;
    }
};