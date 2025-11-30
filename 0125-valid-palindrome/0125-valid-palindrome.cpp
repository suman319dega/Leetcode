class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string temp = "";
        for(int i=0; i<n; i++) {
            if((s[i] != ' ') && isalnum(s[i])) {
                temp += tolower(s[i]);
            }
        }
        int low = 0, high = temp.size() - 1;
        while(low <= high) {
            if(temp[low++] != temp[high--]) return false;
        }
        return true;

    }
};