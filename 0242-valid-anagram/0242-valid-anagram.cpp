class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        vector<int> arr(26,0);
        for(char ch : s) arr[ch - 'a']++;
        for(char ch : t) arr[ch - 'a']--;
        for(int i=0; i<26; i++) {
            if(arr[i] != 0) return false;
        }
        return true;
    }
};