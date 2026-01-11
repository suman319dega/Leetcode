class Solution {
public:
    int subtractProductAndSum(int n) {
        int a = n;
        int sum = 0, pro = 1;
        while(a > 0) {
            int last = a % 10;
            sum += last;
            pro *= last;
            a = a / 10;
        }

        return (pro - sum);
    }
};