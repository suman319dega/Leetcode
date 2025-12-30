class Solution {
public:
    vector<string> result;
    
    void backtrack(string cur,int open,int close,int n) {
        if(cur.size() == 2*n) {
            result.push_back(cur);
            return;
        }
        if (open < n) 
            backtrack(cur + "(", open + 1, close, n);

        if (close < open) 
            backtrack(cur + ")", open, close + 1, n);
    }
    vector<string> generateParenthesis(int n) {
        backtrack("",0,0,n);
        return result;

    }
};