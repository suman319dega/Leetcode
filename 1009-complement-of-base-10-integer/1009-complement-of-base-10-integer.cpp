class Solution {
public:
    int bitwiseComplement(int n) {

        if(n == 0) return 1;
        string ans = "";
        while(n > 0) {
            ans += to_string(n % 2);
            n /= 2;
        }
        reverse(ans.begin(), ans.end());
        int val = 0;
        int high = ans.size() - 1;
        for(int i = 0; i < ans.size(); i++) {
            int v = ans[i] - '0';
            v = 1 - v;   
            val += v * pow(2, high);
            high--;
        }

        return val;
    }
};