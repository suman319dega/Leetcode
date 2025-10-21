class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
    vector<string> series = {
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", 
        ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", 
        ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."
    };
    unordered_set<string> unique;
    for (auto &w : words) {
        string morse;
        for (auto &c : w) morse += series[c - 'a'];
        unique.insert(morse);
    }
    return unique.size();
    
    }
};