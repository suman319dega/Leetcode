class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for(int i=0; i<s.size(); i++) {
            int x = abs(s[i] - 'z') + 1;
            sum += x * (i + 1);
        }
        return sum;
    }
};