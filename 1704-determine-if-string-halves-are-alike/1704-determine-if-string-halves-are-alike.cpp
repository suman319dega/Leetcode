bool isVowel(char ch) {
    return ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') || (ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U'));
}
class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size();
        int x = n/2;
        string s1 = s.substr(0,x);
        string s2 = s.substr(x,n);
        int count1 = 0, count2 = 0;
        for(char ch : s1) {
            if(isVowel(ch)) count1++;
        }

        for(char ch : s2) {
            if(isVowel(ch)) count2++;
        }

        return count1 == count2;
     
    }
};