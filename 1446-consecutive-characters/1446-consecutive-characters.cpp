class Solution {
public:
    int maxPower(string s) {
        int max_power = 0;
        int count = 0;
        for(int i=0; i<s.size()-1; i++) {
            if(s[i] == s[i+1]) {
                count++;
                max_power = max(count,max_power);
            }
            else count = 0;
        }
        return max_power + 1;
    }
};