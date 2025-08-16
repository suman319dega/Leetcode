class Solution {
public:
    string toHex(int num) {
        if(num == 0) return "0";
        string ans = "";
        unsigned int val = num;
        char hex_table[] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
        while(val > 0) {
            int last = val % 16;
            ans += hex_table[last];
            val = val / 16;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};