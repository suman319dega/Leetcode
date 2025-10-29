class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size() < 3) return -1;
        int a = nums[0] , b = nums[0];
        for(int i=1; i<nums.size(); i++) {
            if(nums[i] > a) a = nums[i];
            if(nums[i] < b) b = nums[i];
        }
        for(int num : nums) {
            if(num < a && num > b) return num;
        }
        return -1;
    }
};