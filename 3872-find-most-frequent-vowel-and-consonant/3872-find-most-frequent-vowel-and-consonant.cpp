class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> v(26);
        int max_v = 0,max_c = 0;
        for(char ch : s) {
            v[ch - 'a'] += 1;
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                max_v = max(max_v,v[ch-'a']);
            }
            else  max_c = max(max_c,v[ch-'a']);
        }
        return max_v + max_c;
    }
};