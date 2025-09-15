class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[0];
        int mini = nums[0];
        for(int i=1; i<n; i++) {
            sum += nums[i];
            mini = min(nums[i],mini);
        }
        return sum - n * mini;
    }
};