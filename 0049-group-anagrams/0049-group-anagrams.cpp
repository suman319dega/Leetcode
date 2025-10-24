class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        if(n == 0) return {{""}};
        map<string,vector<string>> m;
        for(int i=0; i<n; i++) {
            vector<int> v(26);
            for(char ch : strs[i]) v[ch - 'a']++;
            string key = "";
            for(int val : v) {
                key.append('#' + to_string(val));
            }
            m[key].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto keys : m) {
            ans.push_back(keys.second);
        }
        return ans;
    }
};