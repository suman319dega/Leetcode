class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        vector<string> v;
        string word;
        while(ss >> word) {
            v.push_back(word);
        }
        int n = v.size();
        return v[n-1].size();
    }
};