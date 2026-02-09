class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if(n < 2) return 0;
        sort(nums.begin(),nums.end());
        int max_size = 0;
        for(int i=1; i<n; i++) {
            max_size = max(max_size,nums[i] - nums[i-1]);
        }
        return max_size;
    }
};