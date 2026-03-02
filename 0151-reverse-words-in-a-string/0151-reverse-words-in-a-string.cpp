class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> v;
        while(ss >> word) {
            v.push_back(word);
        }
        string ans = "";
        for(int i=v.size()-1; i>=0; i--) {
            ans += v[i] + " ";
        }
        ans.pop_back();
        return ans;
    }
};