class Solution {
public:
    int alternateDigitSum(int n) {
        int result = 0;
        bool flag = true;
        string s = to_string(n);
        for(char ch : s) {
            if(flag) {
                result += ch - '0';
            }
            else {
                result -= ch - '0';
            }
            flag = !flag;
        }
        return result;
    }
};