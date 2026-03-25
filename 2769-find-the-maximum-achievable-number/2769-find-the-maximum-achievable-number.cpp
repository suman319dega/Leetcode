class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        t = t * 2;
        return num + t;
    }
};