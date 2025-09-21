class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        int a = nums[0] - 1, b = nums[1] - 1;
        return a * b;
    }
};