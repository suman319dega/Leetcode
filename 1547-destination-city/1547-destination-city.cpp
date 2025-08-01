class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string> s;
        for(auto word : paths) {
            s.insert(word[0]);
        }
        for(auto word : paths) {
            if(s.find(word[1]) == s.end()) return word[1];
        }
        return "";
    }
};