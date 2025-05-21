class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int,char>> v(125);
        for(char ch : s) {
            v[ch] = {v[ch].first+1,ch};
        }
        sort(v.rbegin(),v.rend());
        string ans = "";
        for(auto k : v) {
            ans.append(string(k.first,k.second));
        }
        return ans;
    }
};