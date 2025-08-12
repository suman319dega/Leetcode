class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int j = 0; 
        for (string ch : words) {
            for (int i = 0; i < ch.size(); i++) {
                if (j >= s.size() || s[j] != ch[i]) return false;
                j++;
            }
            if (j == s.size()) return true;
        }
        return j == s.size();
    }
};
