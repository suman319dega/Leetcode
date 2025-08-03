class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string s : words) {
            string a = s;
            reverse(s.begin(),s.end());
            if(a == s) return s;
        }
        return "";
    }
};