class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        long long sum1 = (n * (n + 1) ) / 2;
        long long sum2 = 0;
        for(int num : nums) {
            sum2 += num;
        }
        return abs(sum2 - sum1);
    }
};