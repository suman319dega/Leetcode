class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int num : nums) {
            sum += num;
        }
        int i = 0;
        int left_sum = 0;
        while(i < nums.size()) {
            sum -= nums[i];
            if(sum == left_sum) return i;
            else {
                left_sum += nums[i];
                i++;
            }
        }
        return -1;
    }
};