class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int a = coordinates[0] - 'a';
        int b = coordinates[1] - '0';
        a = a + 1;
        int sum = a + b;
        if(sum % 2 == 0) return false;
        else return true;
    }
};