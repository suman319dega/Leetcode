bool inc(vector<int> &nums) {
    for(int i=1; i<nums.size(); i++) {
        if(nums[i - 1] > nums[i]) return false;
    }
    return true;
}

bool dec(vector<int> &nums) {
    for(int i=1; i<nums.size(); i++) {
        if(nums[i - 1] < nums[i]) return false;
    }
    return true;
}

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        return inc(nums) || dec(nums);
    }
};