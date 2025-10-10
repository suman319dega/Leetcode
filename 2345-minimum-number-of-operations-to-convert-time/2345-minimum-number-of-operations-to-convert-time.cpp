class Solution {
public:
    int convertTime(string current, string correct) {
        int currH = stoi(current.substr(0, 2));
        int currM = stoi(current.substr(3, 2));
        int corrH = stoi(correct.substr(0, 2));
        int corrM = stoi(correct.substr(3, 2));

        int cur_total = currH * 60 + currM;
        int cor_total = corrH * 60 + corrM;
        int diff = cor_total - cur_total;
        int steps[] = {60,15,5,1};
        int ans = 0;
        for(int num : steps) {
            ans += diff / num;
            diff = diff % num;
        }
        return ans;

    }
};