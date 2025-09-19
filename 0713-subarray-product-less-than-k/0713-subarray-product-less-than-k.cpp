class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            long long product = 1; 
            for (int j = i; j < n; j++) {
                product *= nums[j];
                if (product < k) {
                    count++;
                } else {
                    break;
                }
            }
        }
        return count;
    }
};
