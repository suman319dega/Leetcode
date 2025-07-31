class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> v(26);
        for(char ch : ransomNote) {
            v[ch - 'a'] += 1;
        }
        for(char ch : magazine) {
            v[ch - 'a'] -= 1;
        }
        for(char ch : ransomNote) {
            if(v[ch-'a'] > 0) return false;
        }
        return true;

    }
};