class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int right_sum = 0;
        for(int num : nums) {
            right_sum += num;
        }
        int i = 0;
        int left_sum = 0;
        while(i < nums.size()) {
            right_sum -= nums[i];
            if(right_sum == left_sum) return i;
            else {
                left_sum += nums[i];
                i++;
            }
        }
        return -1;
    }
};