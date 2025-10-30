class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN;
        int cur_sum = 0;
        for(int i=0; i<nums.size(); i++) {
            cur_sum += nums[i];
            max_sum = max(max_sum,cur_sum);
            if(cur_sum < 0) {
                cur_sum = 0;
            }
        }
        return max_sum;
    }
};