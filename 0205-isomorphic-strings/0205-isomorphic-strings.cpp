class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;
        map<char,char> m;
        map<char,char> r;
        for(int i=0; i<s.size(); i++) {
            char a = s[i];
            char b = t[i];
            if(m.count(a)){
                if(m[a] != b) return false;
            }
            else {
                if(r.count(b)) return false;
            }

            m[a] = b;
            r[b] = a;
        }
        return true;
        
    }
};