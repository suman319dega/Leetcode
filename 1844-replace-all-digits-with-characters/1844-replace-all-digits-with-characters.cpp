class Solution {
public:
    string replaceDigits(string s) {
        int n = s.size();
        string ans = "";
        for(int i=0; i<n-1; i++) {
            if(i%2 == 0) {
                ans += s[i];
                ans += s[i] + s[i+1] - '0';
            }
        }
        if(isalpha(s[n-1])) ans += s[n-1];
        return ans;
    }
};