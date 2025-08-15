#include <algorithm>
using namespace std;

class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0"; 
        
        bool isNegative = num < 0;
        num = abs(num);
        
        string ans = "";
        while (num > 0) {
            int last = num % 7;
            ans += (last + '0'); 
            num /= 7;
        }
        
        if (isNegative) ans += '-'; 
        
        reverse(ans.begin(), ans.end()); 
        return ans;
    }
};
