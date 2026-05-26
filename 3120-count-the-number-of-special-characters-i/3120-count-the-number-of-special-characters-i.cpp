class Solution {
public:
    int numberOfSpecialChars(string word) {
        int ans = 0;
        map<char,int> m;
        for(char ch : word) {
            m[ch]++;
        }
        for(auto val : m) {
            char ch = val.first;
            if(islower(ch)) {
            char x = toupper(ch);
            if(m.find(x) != m.end()) ans += 1;
            }
            if(isupper(ch)) {
                char y = tolower(ch);
                if(m.find(y) != m.end()) ans += 1;
            }
        }
        return ans / 2;
    }
};