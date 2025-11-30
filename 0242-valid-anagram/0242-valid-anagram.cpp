class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        vector<int> v(26,0);
        for(char ch : s) v[ch - 'a']++;
        for(char ch : t) v[ch - 'a']--;
        for(int i=0; i<26; i++) {
            if(v[i] != 0) return false;
        }
        return true;

    }
};