class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string,vector<string>> m;
        for(string &s : strs) {
            string key = s;
            sort(key.begin(),key.end());
            m[key].push_back(s);
        }
        for(auto &val : m) {
            ans.push_back(val.second);
        }
        return ans;
    }
};