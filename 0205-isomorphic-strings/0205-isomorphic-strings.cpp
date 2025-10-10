bool help(string s, string t) {
    if(s.size() != t.size()) return false;
    map<char,char> m;
    for(int i=0; i<s.size(); i++) {
        if(m.find(s[i]) != m.end() && m[s[i]] != t[i]) return false;
        else m[s[i]] = t[i];
    }
    return true;
}

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        return help(s,t) && help(t,s);
    }
};