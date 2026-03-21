class Solution {
public:
    int percentageLetter(string s, char letter) {
        int n = s.size();
        int count = 0;
        for(char ch : s) {
            if(ch == letter) count++;
        }
        int percent = (static_cast<double>(count) / n) * 100;
        return percent;
    }
};