class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = 0;
        int cur_sum1 = 0, max_sum = nums[0];
        int cur_sum2 = 0, min_sum = nums[0];
        for(int num : nums) {
            cur_sum1 = max(cur_sum1 + num,num);
            max_sum = max(cur_sum1,max_sum);

            cur_sum2 = min(cur_sum2 + num,num);
            min_sum = min(cur_sum2,min_sum);

            total += num;
        }

        if(max_sum < 0) return max_sum;
        return max(max_sum,total - min_sum);
    }
};