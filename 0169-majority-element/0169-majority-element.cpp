class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1, leader = nums[0];
        for(int i=1; i<nums.size(); i++) {
            if(leader == nums[i]) count += 1;
            else {
                count -= 1;
                if(count == 0) {
                    leader = nums[i];
                    count += 1;
                }
            }
        }
        return leader;
    }
};