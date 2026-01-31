class Solution {
public:
    bool canJump(vector<int>& nums) {
        int jumps = 0;
        for(int i=0; i<nums.size()-1; i++) {
            if(jumps <= 0 && nums[i] == 0) return false;
            jumps = max(jumps,nums[i]);
            jumps--;
        }
        return true;
    }
};