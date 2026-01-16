class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> v = {
         ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",
         ".-..","--","-.","---",".--.","--.-",".-.","...","-","..-",
         "...-",".--","-..-","-.--","--.." };
         map<string,string> m;
         for(string word : words) {
            string x = "";
            for(char ch : word) {
                x += v[ch - 'a'];
            }
            m[x] = word;
         }
         return m.size();
    }
};