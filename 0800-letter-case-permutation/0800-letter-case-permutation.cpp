void recursion(string s,vector<string>& result,int id) {
    if(id >= s.size()) {
        result.push_back(s);
        return;
    }
    recursion(s,result,id+1);
    if(isalpha(s[id])) {
        if(islower(s[id])) s[id] = toupper(s[id]);
        else s[id] = tolower(s[id]);
        recursion(s,result,id+1);
    }
}

class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> result;
        recursion(s,result,0);
        return result;
    }
};