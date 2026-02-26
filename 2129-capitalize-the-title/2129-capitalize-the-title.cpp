class Solution {
public:
    string capitalizeTitle(string title) {
        stringstream ss(title);
        vector<string> words;
        string word;
        while(ss >> word) {
            words.push_back(word);
        }
        string ans = "";
        for(string v : words) {
            string s = "";
            if(v.size() <= 2) {
                for(int i=0; i<v.size(); i++) {
                    s += tolower(v[i]);
                }
            }
            else if(v.size() >= 3) {
                s += toupper(v[0]);
                for(int i=1; i<v.size(); i++) {
                    s += tolower(v[i]);
                }
            }
            ans += s + " ";
        }
        ans.pop_back();
        return ans;
    }
};