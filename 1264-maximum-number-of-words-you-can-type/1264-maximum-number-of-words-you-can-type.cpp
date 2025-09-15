class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<bool> broke(26,false);
        for(char ch : brokenLetters) {
            broke[ch - 'a'] = true;
        }
        stringstream ss(text);
        string word;
        int count = 0;
        while (ss >> word) { 
            bool valid = true;
            for(char ch : word) {
                if(broke[ch - 'a']) {
                    valid = false;
                }
            }
            if(valid) count += 1;
        }
        return count;
    }
};