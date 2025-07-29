class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char, string> m;
        map<string, char> rev; 
        vector<string> v;
        stringstream ss(s);
        string word;

        while (ss >> word) {
            v.push_back(word);
        }

        if (pattern.size() != v.size()) return false;

        for (int i = 0; i < pattern.size(); i++) {
            char c = pattern[i];
            string w = v[i];
            if (m.count(c)) {
                if (m[c] != w) return false;
            } else {
                if (rev.count(w)) return false;
                m[c] = w;
                rev[w] = c;
            }
        }

        return true;
    }
};
