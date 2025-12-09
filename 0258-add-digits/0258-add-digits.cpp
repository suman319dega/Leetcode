int add(int num) {
    int sum = 0;
    while(num > 0) {
        int last = num % 10;
        sum += last;
        num = num / 10;
    }
    return sum;
}

class Solution {
public:
    int addDigits(int num) {
        if(num == 0) return 0;
        while(num >= 10) {
            int sum = add(num);
            num = sum;
        }
        return num;
    }
};