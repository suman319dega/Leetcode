class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int leader = nums[0];
        int count = 1;
        for(int i=1; i<nums.size(); i++) {
            if(nums[i] == leader) count++;
            else {
                count--;
                if(count == 0) {
                    leader = nums[i];
                    count = 1;
                }
            }
        }
        return leader;
    }
};