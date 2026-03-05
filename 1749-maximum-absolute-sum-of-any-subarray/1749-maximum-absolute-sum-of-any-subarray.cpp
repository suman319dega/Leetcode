class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int cur_sum1 = 0, max_sum = INT_MIN;
        int cur_sum2 = 0, min_sum = INT_MAX;
        for(int num : nums) {
            cur_sum1 = max(num,cur_sum1 + num);
            max_sum = max(max_sum,cur_sum1);

            cur_sum2 = min(num,cur_sum2 + num);
            min_sum = min(min_sum,cur_sum2);
        }

        return max(max_sum,abs(min_sum));
    }
};