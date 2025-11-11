class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int> m;
        for(char ch : jewels) m[ch] = 0;
        for(char ch : stones) {
            if(m.find(ch) != m.end()) {
                m[ch] += 1;
            }
        }
        int ans = 0;
        for(auto val : m) ans += val.second;
        return ans;
    }
};