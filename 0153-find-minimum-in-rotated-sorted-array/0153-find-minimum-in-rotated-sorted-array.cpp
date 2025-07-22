class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        int ans = INT_MAX;
        while(low <= high) {
            int mid = (low + high) / 2;
            if(nums[low] <= nums[mid]) {
                if(nums[low] < ans) {
                    ans = nums[low];
                }
                low = mid + 1;
            }
            else if(nums[mid] <= nums[high]) {
                if(nums[mid] < ans) {
                    ans = nums[mid];
                }
                high = mid - 1;
            }
        }
        return ans;
    }
};