class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0) return "0";
        bool neg = num < 0;
        num = abs(num);
        string res = "";
        while(num > 0) {
            res += to_string(num % 7);
            num = num / 7;
        }
        reverse(res.begin(),res.end());
        if(neg) return "-" + res;
        else return res;
    }
};