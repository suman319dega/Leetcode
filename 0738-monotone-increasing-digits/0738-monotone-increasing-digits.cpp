class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string s = to_string(n);
        int a = s.size();
        int mark = a;
        for(int i=a-1; i > 0; i--) {
            if(s[i-1] > s[i]) {
                s[i-1] = s[i-1] - 1;
                mark = i;
            }
        }
        for(int i=mark; i<a; i++) s[i] = '9';
        return stoi(s);
    }
};