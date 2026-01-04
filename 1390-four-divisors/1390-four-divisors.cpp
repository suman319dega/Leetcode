void divisor(int num, vector<int>& temp) {
    for(int i = 1; i * i <= num; i++) {
        if(num % i == 0) {
            temp.push_back(i);
            if(i != num / i)
                temp.push_back(num / i);

            if(temp.size() > 4) return;
        }
    }
}

class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum = 0;

        for(int num : nums) {
            vector<int> temp;
            divisor(num, temp);

            if(temp.size() == 4) {
                for(int d : temp)
                    sum += d;
            }
        }
        return sum;
    }
};
