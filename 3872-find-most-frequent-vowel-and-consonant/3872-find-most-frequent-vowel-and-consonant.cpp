class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int> vowels,con;
        for(char ch : s) {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vowels[ch] += 1;
            else con[ch] += 1;
        }
        int max_v = 0,max_c = 0;
        for(auto v : vowels) {
            if(v.second > max_v) max_v = v.second;
        }
        for(auto c : con) {
            if(c.second > max_c) max_c = c.second;
        }
        return max_c + max_v;
    }
};