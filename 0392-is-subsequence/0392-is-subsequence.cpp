class Solution {
public:
    bool isSubsequence(string s, string t) {
        int a = s.size(), b = t.size();
        int i = 0, j = 0;
        while(i < a && j < b) {
            if(s[i] == t[j]){
                i++;
            }
            j++;
        }
        return i == a;
    }
};