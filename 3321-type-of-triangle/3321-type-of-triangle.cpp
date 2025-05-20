class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if (nums[0] + nums[1] <= nums[2]) return "none";

        int count = 0;
        if (nums[0] == nums[1]) count++;
        if (nums[1] == nums[2]) count++;
        if (nums[0] == nums[2]) count++;

        if (count == 3) return "equilateral"; 
        else if (count >= 1) return "isosceles"; 
        else return "scalene"; 
    }
};
