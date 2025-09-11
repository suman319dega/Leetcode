class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> upper(26,0);
        vector<int> lower(26,0);
        for(char ch : word) {
            if(islower(ch)) {
                lower[ch - 'a'] = 1;
            }
            else {
                upper[ch - 'A'] = 1;
            }
        }
        int count = 0;
        for(int i=0; i<26; i++) {
            if(upper[i] && lower[i]) count += 1;
        }
        return count;
    }
};