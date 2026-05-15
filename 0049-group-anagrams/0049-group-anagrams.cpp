class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string,vector<string>> m;
        for(string s : strs) {
            string x = s;
            sort(x.begin(),x.end());
            m[x].push_back(s);
        }
        for(auto val : m) {
            ans.push_back(val.second);
        }
        return ans;
    }
};