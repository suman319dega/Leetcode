bool isvowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

class Solution {
public:
    int countVowelSubstrings(string word) {
        int n = word.size();
        int total = 0;

        for (int i = 0; i < n; i++) {
            if (!isvowel(word[i])) continue;  
            
            unordered_map<char, int> freq;
            for (int j = i; j < n; j++) {
                if (!isvowel(word[j])) break; 
                freq[word[j]]++;
                if (freq.size() == 5) total++; 
            }
        }
        return total;
    }
};
