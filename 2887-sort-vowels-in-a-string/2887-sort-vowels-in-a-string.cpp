bool is_vowel(char ch) {
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') return true;
    else return false;
}

class Solution {
public:
    string sortVowels(string s) {
        string vowels = "";
        for(char ch : s) {
            if(is_vowel(ch)) vowels += ch;
        }
        sort(vowels.begin(),vowels.end());
        int j = 0;
        for(int i=0; i<s.size(); i++) {
            if(is_vowel(s[i])) {
                swap(s[i],vowels[j++]);
            }
        }
        return s;
    }
};