class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int min_len = INT_MAX;
        int n = nums.size(), i = 0;
        int sum = 0;
        for(int j=0; j<n; j++) {
            sum += nums[j];
            while(sum >= target) {
                min_len = min(min_len,j-i+1);
                sum -= nums[i];
                i++;
            }
        }
        return (min_len == INT_MAX) ? 0 : min_len;
    }
};