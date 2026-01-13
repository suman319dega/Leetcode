class Solution {
public:
    string customSortString(string order, string s) {
        vector<int> v(26,0);
        for(char ch : s) v[ch - 'a']++;
        string ans = "";
        for(char ch : order) {
            while(v[ch - 'a'] > 0) {
                ans += ch;
                v[ch - 'a']--;
            }
        }

        for(char ch : s) {
            if(v[ch - 'a'] > 0) {
                ans += ch;
                v[ch - 'a']--;
            }
        }
        return ans;
        
    }
};