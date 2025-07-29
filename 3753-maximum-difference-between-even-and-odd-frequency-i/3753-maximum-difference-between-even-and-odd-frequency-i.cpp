class Solution {
public:
    int maxDifference(string s) {
        int odd = 0,even = s.size();
        map<char,int> m;
        for(char ch : s) {
            m[ch] += 1;
        }
        for(auto k : m) {
            if(k.second % 2 == 0) {
                even = min(even,k.second);
            }
            else {
                odd = max(odd,k.second);
            }
        }
        return odd - even;
    }
};