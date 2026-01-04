class Solution {
public:
    string reversePrefix(string s, int k) {
        if(k == 1) return s;
        string s1 = "";
        for(int i=0; i<k; i++) {
            s1 += s[i];
        }
        reverse(s1.begin(),s1.end());
        for(int i=k; i<s.size(); i++) {
            s1 += s[i];
        }

        return s1;
    }
};