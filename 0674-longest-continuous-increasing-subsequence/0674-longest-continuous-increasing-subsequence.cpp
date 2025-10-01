class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        int max_count = 1,count = 1;
        for(int i=1; i<n; i++) {
            if(nums[i] > nums[i-1]) {
                count++;
            }
            else {
                max_count = max(count,max_count);
                count = 1;
            }
        }
        return max(count,max_count);
    }
};