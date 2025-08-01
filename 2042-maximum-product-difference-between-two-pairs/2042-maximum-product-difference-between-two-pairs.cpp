class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int max1 = nums[n - 1];       
        int max2 = nums[n - 2];       
        int min1 = nums[0];           
        int min2 = nums[1];           
        return (max1 * max2) - (min1 * min2);
    }
};
