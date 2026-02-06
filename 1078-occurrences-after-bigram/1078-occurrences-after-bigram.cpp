class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        stringstream ss(text);
        vector<string> word;
        string s;
        while(ss >> s) {
            word.push_back(s);
        }
        vector<string> ans;
        for (int i = 2; i < word.size(); i++) {
            if (word[i-2] == first && word[i-1] == second) {
                ans.push_back(word[i]);
            }
        }
        return ans;
    }
};