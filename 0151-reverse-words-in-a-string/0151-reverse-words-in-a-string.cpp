class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string> v;
        string word;
        while(ss >> word) {
            v.push_back(word);
        }
        string ans = "";
        int n = v.size();
        for(int i=n-1; i>=0; i--) {
            ans += v[i] + " ";
        }
        ans.pop_back();
        return ans;
    }
};