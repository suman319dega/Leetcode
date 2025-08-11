class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss(sentence);
        string word;
        int n = searchWord.size();
        int i = 1;
        while(ss >> word) {
            if(word.size() >= n && word.substr(0,n) == searchWord) return i;
            i++;
        }
        return -1;
    }
};