class Solution {
public:
    int findClosest(int x, int y, int z) {
        int count1 = abs(x-z);
        int count2 = abs(y-z);
        if(count1 < count2) return 1;
        else if(count1 > count2) return 2;
        else return 0;
    }
};