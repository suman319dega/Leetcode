class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        int min_len = INT_MAX;
        int sum = 0;
        for(int i=0; i<n; i++) {
            sum += nums[i];
            while(sum >= target) {
                min_len = min(min_len,i-j+1);
                sum -= nums[j];
                j++;
            }
        }
        return (min_len == INT_MAX) ? 0 : min_len;
    }
};