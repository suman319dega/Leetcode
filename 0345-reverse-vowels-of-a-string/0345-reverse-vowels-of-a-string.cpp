bool isvowel(char ch) {
    return (ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U') ||
            (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u');
}

class Solution {
public:
    string reverseVowels(string s) {
        string key = "";
        for(char ch : s) {
            if(isvowel(ch)) key += ch;
        }
        reverse(key.begin(),key.end());
        int id = 0;
        for(int i=0; i<s.size(); i++) {
            if(isvowel(s[i])) swap(s[i],key[id++]);
        }
        return s;
    }
};