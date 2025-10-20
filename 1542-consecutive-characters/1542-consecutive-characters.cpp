class Solution {
public:
    int maxPower(string s) {
        int n = s.size();
        int max_count = 1, count = 1;
        for(int i=0; i<n-1; i++) {
            if(s[i] == s[i+1]) {
                count++;
            }
            else count = 1;
            max_count = max(count,max_count);
        }
        return max_count;
    }
};