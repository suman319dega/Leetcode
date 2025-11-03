string build(string s) {
    string result = "";
    for(char ch : s) {
        if(ch == '#') {
            if(!result.empty()) result.pop_back();
        }
        else result.push_back(ch);
    }
    return result;
}


class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1 = build(s), s2 = build(t);
        return s1 == s2;
    }
};