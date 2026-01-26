class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum = 0;
        for (int num : nums) sum += num;
        int leftSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (leftSum == sum - leftSum - nums[i])
                return i;

            leftSum += nums[i];
        }

        return -1;
    }
};
