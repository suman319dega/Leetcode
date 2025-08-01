class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26);
        for(char ch : s) freq[ch - 'a'] += 1;
        for(int i=0; i<s.size(); i++){
            if(freq[s[i] - 'a'] == 1) return i;
        }
        return -1;
    }
};