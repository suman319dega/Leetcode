class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int low = 0, best = 0,zero = 0;
        for(int high = 0; high < nums.size(); high++) {
            if(nums[high] == 0) zero++;
            while(zero > 1) {
                if(nums[low] == 0) zero--;
                low += 1;
            }
            best = max(best,high-low + 1);
        }
        int ans = best - 1;   
        if (ans < 0) ans = 0; 
        return ans;
    }
};