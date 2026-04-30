class Solution {
public:
    bool checkRecord(string s) {
        int A = 0, L = 0;
        int count = 0;
        for(char ch : s) {
            if(ch == 'A') A++;
            if(ch == 'L') {
                count++;
                L = max(count,L);
            }
            else count = 0;
        }
        
        return (A < 2) && (L < 3);
    }
};