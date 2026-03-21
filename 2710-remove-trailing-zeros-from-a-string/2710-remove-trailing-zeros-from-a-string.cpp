class Solution {
public:
    string removeTrailingZeros(string num) {
        int n = num.size();
        int x = n-1;
        for(int i=n-1; i>=0; i--) {
            if(num[i] == '0') x--;
            else break;
        }
        return num.substr(0,x+1);
    }
};