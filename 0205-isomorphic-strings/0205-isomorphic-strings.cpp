class Solution {
public:
    
    bool helper(string s1, string s2) {
        if(s1.size() != s2.size()) return false;
        map<char,char> m;
        for(int i=0; i<s1.size(); i++) {
            if(m.find(s1[i]) == m.end()) {
                m[s1[i]] = s2[i];
            }
            if(m[s1[i]] != s2[i]) return false;
        }
        return true;
    }
    
    bool isIsomorphic(string s, string t) {
        return helper(s,t) && helper(t,s);
    }
};